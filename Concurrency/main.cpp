#include <iostream>
#include <thread>

void hello();

int main() {

    std::cout << "Version:" << __cplusplus << std::endl;

    std::thread t(hello);
    t.join();

    return 0;
}

void hello() {
    std::cout << "Hello Concurrent World\n";
}