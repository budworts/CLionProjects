#include <iostream>

#include "Rectangle.h"
#include "Cubiod.h"

using namespace std;

struct Demo {
    int x = 0;
    int y = 0;

    void display() {
        std::cout << "Demo " << x << " " << y << std::endl;
    }
};

int main() {

    cout << "Version: " << __cplusplus << endl;

    // Created in stack
    Rectangle r1;
    cout << r1.area() << endl;
    r1.setBreadth(20);
    r1.setLength(20);
    cout << r1.area() << endl;

    if ( r1.isSquare() ) {
        cout << "r1 is a square" << endl;
    }

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

    Demo d1;
    d1.x = 10;
    d1.y = 5;
    d1.display();

    Cubiod c1(10,10,5);
    cout << "volume: " << c1.Volume() << endl;

    Cubiod c2;
    cout << "volume: " << c2.Volume() << endl;

    return 0;
}
