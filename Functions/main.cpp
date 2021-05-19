#include <iostream>
#include <cmath>

using namespace std;

int pow(int x, int y);
int add(int x, int y);
int add(int x, int y, int z);
float add(float x, float y);
int addArgs( int x, int y, int z = 0);
int *retByAddr(int sz);
int &retByRef(int &x);
void scope();
void myStatic();
void recursive( int n );
void ptrToFunc();

template<class T>
T Max( T x, T y) {

    if ( x > y )
        return x;

    return y;
}

template<class T>
T Min( T x, T y) {

    if ( x < y )
        return x;

    return y;
}

template<class T>
T Max3( T x, T y, T z = 5) {
    return x>y&&x>z?x:(y>z?y:z);
}

template<class T>
void swapByRef(T &x, T &y) {
    T tmp = x;
    x = y;
    y = tmp;
}

template<class T>
void swapByAddr(T *x, T *y) {
    T tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {

    std::cout << "Version: " << __cplusplus << std::endl;
    cout << pow(2,5) << endl;
    cout << Max( 10,6 ) << endl;
    cout << Max( 10.5f,6.65f ) << endl;
    cout << addArgs(3,5) << endl;
    cout << addArgs(3,5,40) << endl;
    cout << Max3( 2,4 ) << endl;
    cout << Max3( 2,4,3 ) << endl;

    int x = 10;
    int y = 20;
    swapByRef(x, y);
    cout << x << " " << y << endl;

    float f1 = 10.11f;
    float f2 = 20.5f;
    swapByRef(f1, f2);
    cout << f1 << " " << f2 << endl;

    swapByAddr(&f1, &f2);
    cout << f1 << " " << f2 << endl;


    int *p = retByAddr(10);

    for( auto i=0; i < 10; i++ ) {
        cout << p[i] << endl;
    }

    retByRef(x) += 25; // *******
    cout << "-> " << x << endl;

    scope();

    myStatic();
    myStatic();

    recursive( 5 );

    int (*fp2)(int,int);
    fp2 = Max;
    cout << (*fp2)(10,6) << endl;

    fp2 = Min;
    cout << (*fp2)(10,6) << endl;

    void (*fp)() = ptrToFunc;
    (*fp)();
    return 0;
}

void ptrToFunc() {
    cout << ">>>> The End <<<<" << endl;
}

void recursive( int n ) {

    if ( n > 0 ) {
        cout << n << endl;
        recursive( n -1 );
    }
}

void myStatic() {

    static auto x = 20;

    x += 10;

    cout << "static x: " << x << endl;
}

int g = 30;

void scope() {
    int g = 20;

    {
        int g = 10;
        cout << "g: " << g << endl;
    }

    cout << "g: " << g << endl;
    cout << "g: " << ::g << endl;
}

int &retByRef(int &x) {
    x *= 2;
    cout << "-> " << x << endl;
    return x;
}

int *retByAddr(int sz) {

    int *p = new int[sz];

    for( auto i=0; i < sz; i++ ) {
        p[i] = i * 2;
    }

    return p;
}

int addArgs( int x, int y, int z) {
    return x + y + z;
}

int add(int x, int y) {
    return x + y;
}

int add(int x, int y, int z) {
    return x + y + z;
}

float add(float x, float y) {
    return x + y;
}

int pow( int x, int y ) {
    for ( auto i = 1; i < y; i++ ) {
        x = x * 2;
    }

    return x;
}
