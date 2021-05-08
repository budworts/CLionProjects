#include <iostream>

void P1();
void P2();
void P3();
void P4();
void P5();
void References();

int main() {

    std::cout << "version: " << __cplusplus << std::endl;

    P1();
//    P2();
//    P3();
//    P4();
    P5();
    References();
    return 0;
}

void P1(){
    int x{10};
    int *p = &x;

    using namespace std;
    cout << "x:" << x << " &x:" << &x << endl;
    cout << "*p:" << *p << " p:" << p << " &p:" << &p << endl;
}

void P2() {

    // Stack
    int A[] = {1,2,3,4,5};
    A[3] = 15;

    // Stack
    int *p;

    // Heap - must deallocate
    p = new int[5];
    p[2] = 20;
    std::cout << p << " - " << p[2] << std::endl;
    delete []p;
    p = nullptr;

}

void P3() {
    int sz = 0;

    std::cout << "Enter array size: ";
    std::cin >> sz;
    int A[sz];
    std::cout << sizeof A << std::endl;

    int *p = new int[sz];
    delete []p;
    p = nullptr;
}

void P4() {
    int *p = new int[20];
    delete []p;
    p = new int[40];
    delete []p;
    p = nullptr;
}

void P5() {

    using namespace std;

    int A[5] = {3, 6, 9, 12, 15};
    int *p = A;
    cout << p << " - " << p[2] << endl;
    p++;
    cout << p << " - " << p[2] << endl;
    p = p - 2;
    cout << p << " - " << p[2] << endl;

    p = A;
    int *p2 = &A[4];

    // find distance between 2 pointers
    cout << p << " [" << *p << "] - " << p2 << " [" << *p2 << "]\n";
    int d = p2 - p;
    cout << "distance : " << d << endl;

    for ( auto i = 0; i < 5; i++ ) {
        cout << A[i] << " ";
    }

    cout << endl;

    for ( auto i = 0; i < 5; i++ ) {
        cout << p[i] << " ";
    }

    cout << endl;

    for ( auto i = 0; i < 5; i++ ) {
        cout << *p << " ";
        p++;
    }

    cout << endl;

    p = A;

    for ( auto i = 0; i < 5; i++ ) {
        cout << i[A] << " "; // ******
    }

    cout << endl;

    for ( auto i = 0; i < 5; i++ ) {
        cout << *(A+i) << " ";
    }

    cout << endl;

    for ( auto i = 0; i < 5; i++ ) {
        cout << *(p+i) << " ";
    }

    cout << endl;

    // Addresses
    for ( auto i = 0; i < 5; i++ ) {
        cout << A+i << " ";
    }

    cout << endl;

    for ( auto i = 0; i < 5; i++ ) {
        cout << p+i << " ";
    }

    cout << endl;


    p = nullptr;
    p2 = nullptr;
}

void References() {

    int x = 10;
    int &r = x;  // Can only assign to r once

    x++;
    r++;

    std::cout << x << std::endl;
    std::cout << r << std::endl;

    // Both share the same address
    std::cout << &r << " - " << &x << std::endl;
}