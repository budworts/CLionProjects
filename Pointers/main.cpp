#include <iostream>

void P1();

int main() {

    std::cout << "version: " << __cplusplus << std::endl;

    P1();

    return 0;
}

void P1(){
    int x{10};
    int *p = &x;

    using namespace std;

    cout << "x:" << x << " &x:" << &x << endl;
    cout << "*p:" << *p << " p:" << p << " &p:" << &p << endl;
}