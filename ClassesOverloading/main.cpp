#include <iostream>
#include "Complex.h"

using namespace std;

int main() {

    Complex c1(5,4);
    Complex c2(5,11);
    Complex c3;

    c1.setReal(5);
    c1.setImg( 4);
    c2.setReal(9);
    c2.setImg( 3);

    c3 = c2.add(c1);
    c3.display();

    c1 = c2 + c3;
    c1.display();

    c2 = operator+(c1,c3);
    c2.display();
    cout << c2 << endl;
    operator << (cout,c1) << endl;
    return 0;
}
