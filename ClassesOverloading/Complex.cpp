//
// Created by Steven Budworth on 10/06/2021.
//

#include <iostream>
#include "Complex.h"

Complex::Complex(int real, int img) {
    this->real = real;
    this->img = img;
}

Complex Complex::add(Complex &c) {
    Complex tmp;
    tmp.real = this->real + c.real;
    tmp.img = this->img + c.img;
    return tmp;
}

//
//Complex Complex::operator+(Complex &c) {
//    Complex tmp;
//    tmp.real = this->real + c.real;
//    tmp.img = this->img + c.img;
//    return tmp;
//}

void Complex::display() {
    std::cout << real << "+i" << img << std::endl;
}

int Complex::getReal() const {
    return real;
}

void Complex::setReal(int real) {
    Complex::real = real;
}

int Complex::getImg() const {
    return img;
}

void Complex::setImg(int img) {
    Complex::img = img;
}

Complex operator+(Complex &c1, Complex &c2) {
    Complex tmp;
    tmp.real = c1.real + c2.real;
    tmp.img = c1.img + c2.img;
    return tmp;
}
