#include <iostream>

#include "Child.h"

int main() {

    std::cout << "Version: " << __cplusplus << std::endl;

    Child c;

//    c.a = 20; error private
//    c.b = 23;
    c.c = 30;

    return 0;
}
