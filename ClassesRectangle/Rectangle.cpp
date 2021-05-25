//
// Created by Steven Budworth on 25/05/2021.
//

#include "Rectangle.h"

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
        Rectangle::length = 1;
    } else {
        Rectangle::length = length;
    }
}

int Rectangle::getBreadth() const {
    return breadth;
}

void Rectangle::setBreadth(int breadth) {

    if ( breadth < 0 ) {
        Rectangle::breadth = 1;
    } else {
        Rectangle::breadth = breadth;
    }
}
