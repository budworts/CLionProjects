//
// Created by Steven Budworth on 17/06/2021.
//

#ifndef CLASSESINHERITANCE_CHILDPROTECTED_H
#define CLASSESINHERITANCE_CHILDPROTECTED_H

#include "Parent.h"

class ChildProtected: protected Parent {
public:
    void funcChild();
};


#endif //CLASSESINHERITANCE_CHILDPROTECTED_H
