//
// Created by Steven Budworth on 01/03/2021.
//

#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H

class Shape {			// Abstract Base class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;	 // pure virtual function
    virtual void rotate() = 0;   // pure virtual function
    virtual ~Shape() { }
};

#endif //SHAPE_SHAPE_H
