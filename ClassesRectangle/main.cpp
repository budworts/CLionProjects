#include <iostream>

#include "Rectangle.h"

using namespace std;

int main() {

    cout << "Version: " << __cplusplus << endl;

    // Created in stack
    Rectangle r1;
    cout << r1.area() << endl;
    r1.setBreadth(20);
    r1.setLength(20);
    cout << r1.area() << endl;
    cout << r1.isSquare() << endl;

    // Created in stack
    Rectangle r2;
    r2.setBreadth(5);
    r2.setLength(10);
    cout << r2.perimeter() << endl;
    cout << r2.isSquare() << endl;

    Rectangle *p = &r2;
    cout << p->perimeter() << endl;

    // Created in heap
    Rectangle *ph = new Rectangle(5,3);
    cout << ph->area() << endl;
    delete ph;

    return 0;
}
