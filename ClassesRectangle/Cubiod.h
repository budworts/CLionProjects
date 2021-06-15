//
// Created by Steven Budworth on 15/06/2021.
//

#ifndef CLASSESRECTANGLE_CUBIOD_H
#define CLASSESRECTANGLE_CUBIOD_H

#include "Rectangle.h"

class Cubiod: public Rectangle {

private:
    int height;

public:
    // Constructors
    Cubiod(int length = 1, int breadth = 1, int height = 1);

    // Destructors
    ~Cubiod();

    // Accessors
    int getHeight() const;

    // Mutators
    void setHeight(int height);

    // Enquiry
    int Volume();

    // Facilitators
};


#endif //CLASSESRECTANGLE_CUBIOD_H
