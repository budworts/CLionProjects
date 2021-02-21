#include <iostream>
#include "MyString.h"

using namespace std;

int main() {

    cout << "C++ version: " << __cplusplus << endl << endl;

    cout << "MyString a{\"Hello\"};\n";
    MyString a{"Hello"};     //    Overloaded constructor used
    cout << "MyString b = a;\n";
    MyString b = a;         //    Copy constructor used
    cout << "\nb = a;\n";
    b = a;                 //    Copy assignment used
    cout << "MyString d;\n";
    MyString d;             //    Default constructor used
    cout << "d = \"Hello World\";\n";
    d = "Hello World";     //    Overloaded constructor used to create temp object from "Hello World" string
    //    Move assignment used copy temp to d
    //    Destructor called for temp "Hello World" string
    cout << "MyString low = d + \" \" + a;\n";
    MyString low = d + " " + a;
    low.display();
    cout << "MyString x = -low;\n";
    MyString x = -low;
    x.display();

    MyString name1{"Dave"};
    MyString name2{"Fred"};
    MyString name3;

    cout << "What is your name? ";
    cin >> name3;
    cout << name1 << " + " << name2 << " + " << name3 << endl;
    cout << "What are your 3 names? ";
    cin >> name3 >> name2 >> name1;
    cout << name1 << " + " << name2 << " + " << name3 << endl;

    cout << "Exit...." << endl;
    return 0;
}
