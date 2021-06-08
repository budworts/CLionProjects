//
// Created by Steven Budworth on 25/05/2021.
//

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int length, int breadth) {
    setLength(length);
    setBreadth(breadth);
}

Rectangle::Rectangle(Rectangle &rectangle) {
    setLength(rectangle.length);
    setBreadth(rectangle.breadth);
}

Rectangle::~Rectangle() {
    std::cout << "Destructor called..." << std::endl;
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return (length * breadth) * 2;
}

int Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(int length) {

    if (length < 0) {
        this->length = 1;
    } else {
        this->length = length;
    }
}

int Rectangle::getBreadth() const {
    return breadth;
}

void Rectangle::setBreadth(int breadth) {

    if ( breadth < 0 ) {
        this->breadth = 1;
    } else {
        this->breadth = breadth;
    }
}

bool Rectangle::isSquare() {
    return length == breadth? true : false;
}
