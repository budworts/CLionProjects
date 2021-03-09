//
// Created by Steven Budworth on 05/03/2021.
//

#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}