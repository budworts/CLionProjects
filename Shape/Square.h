//
// Created by Steven Budworth on 01/03/2021.
//

#ifndef SHAPE_SQUARE_H
#define SHAPE_SQUARE_H

#include "Closed_Shape.h"

class Square: public Closed_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

#endif //SHAPE_SQUARE_H
