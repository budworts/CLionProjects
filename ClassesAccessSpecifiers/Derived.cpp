//
// Created by Steven Budworth on 17/06/2021.
//

#include "Derived.h"

void Derived::funcDerived() {
//    a = 1; error private
    b = 2; // ok protected
    c = 3; // ok public
}
