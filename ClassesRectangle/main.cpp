#include <iostream>

#include "Rectangle.h"

using namespace std;

int main() {

    cout << "Version: " << __cplusplus << endl;

    // Created in stack
    Rectangle r1;
    Rectangle r2;

    r1.setBreadth(10);
    r1.setLength(20);
    cout << r1.area() << endl;

    r2.setBreadth(5);
    r2.setLength(10);
    cout << r2.perimeter() << endl;

    Rectangle *p = &r2;
    cout << p->perimeter() << endl;

    // Created in heap
    Rectangle *ph = new Rectangle;
    ph->setLength(5);
    ph->setBreadth(3);
    cout << ph->area() << endl;
    delete ph;

    return 0;
}
