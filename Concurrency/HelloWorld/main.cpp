#include <iostream>
#include <thread>

void hello();

int main() {
    std::thread t(hello);
    t.join();
    return 0;
}

void hello() {
    std::cout << "Hello Concurrent World\n" << std::endl;
}