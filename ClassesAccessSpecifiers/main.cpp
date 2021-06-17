#include <iostream>
#include "Base.h"

using namespace std;

int main() {

    Base x;

//    x.a = 15;  Error private
//    x.b = 25;  Error protected
    x.c = 35;  // ok public

    return 0;
}
