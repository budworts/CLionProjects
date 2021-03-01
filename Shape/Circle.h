//
// Created by Steven Budworth on 01/03/2021.
//

#ifndef SHAPE_CIRCLE_H
#define SHAPE_CIRCLE_H

#include "Closed_Shape.h"

class Circle: public Closed_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};




#endif //SHAPE_CIRCLE_H
