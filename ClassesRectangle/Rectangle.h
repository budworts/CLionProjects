//
// Created by Steven Budworth on 25/05/2021.
//

#ifndef CLASSESRECTANGLE_RECTANGLE_H
#define CLASSESRECTANGLE_RECTANGLE_H

class Rectangle {

private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle(int length = 1, int breadth = 1);
    Rectangle(Rectangle &rectangle);

    // Destructors
    ~Rectangle();

    // Enquiry
    int area();
    int perimeter();

    // Accessors
    int getLength() const;
    int getBreadth() const;

    // Mutators
    void setLength(int length);
    void setBreadth(int breadth);

    // Facilitators
    bool isSquare();
};

#endif //CLASSESRECTANGLE_RECTANGLE_H
