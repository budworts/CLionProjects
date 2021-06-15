//
// Created by Steven Budworth on 15/06/2021.
//

#include <iostream>
#include "Cubiod.h"

Cubiod::Cubiod(int length, int breadth, int height) : Rectangle(length,breadth) {
    setHeight(height);
}

Cubiod::~Cubiod() {
    std::cout << "Destructor called..." << std::endl;
}

int Cubiod::Volume() {
    return getLength() * getBreadth() * getHeight();
}

int Cubiod::getHeight() const {
    return height;
}

void Cubiod::setHeight(int height) {

    if (height < 0) {
        this->height = 1;
    } else {
        this->height = height;
    }
}
