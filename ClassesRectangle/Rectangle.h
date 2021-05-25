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

    int area();

    int perimeter();

    int getLength() const;

    void setLength(int length);

    int getBreadth() const;

    void setBreadth(int breadth);
};


#endif //CLASSESRECTANGLE_RECTANGLE_H
