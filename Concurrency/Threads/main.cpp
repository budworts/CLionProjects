#include <iostream>
#include <thread>

struct func {
    int &i;

    func(int &i_):i(i_){}

    void operator()() {
        for (auto  j{0}; j<100; ++j) {
            std::cout << "0";
        }

        std::cout << std::endl;
    }
};

class ThreadGuard {
    std::thread &thd;
public:
    explicit ThreadGuard(std::thread &thd_):thd(thd_){}

    ~ThreadGuard() {
        if (thd.joinable()) {
            thd.join();
        }
    }

    ThreadGuard( ThreadGuard const &)=delete;
    ThreadGuard &operator=(ThreadGuard const &)=delete;
};

void f1();
void f2();

int main() {

    f1();
    f2();
    return 0;
}

void f1() {
    auto localVar{0};
    func myFunc(localVar);

    std::thread t1(myFunc);

    try {
        std::cout << "try block...\n";
    }
    catch (...) {
        t1.join();
        throw;
    }

    t1.join();
}

// Using RAII to wait for thread to complete
void f2() {
    auto localVar{0};
    func myFunc(localVar);

    std::thread t1(myFunc);
    ThreadGuard g(t1);
    // do something... in this thread
}