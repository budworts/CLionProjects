//
// Created by Steven Budworth on 01/03/2021.
//

#ifndef SHAPE_LINE_H
#define SHAPE_LINE_H

#include "Open_Shape.h"

class Line: public Open_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};


#endif //SHAPE_LINE_H
