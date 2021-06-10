//
// Created by Steven Budworth on 10/06/2021.
//

#ifndef CLASSESOVERLOADING_COMPLEX_H
#define CLASSESOVERLOADING_COMPLEX_H


class Complex {
private:
    int real;
    int img;
public:
    Complex(int real = 0, int img = 0);

    Complex add(Complex &c);

//    Complex operator+(Complex &c);

    friend Complex operator+(Complex &c1, Complex &c2);

    void display();

    int getReal() const;

    void setReal(int real);

    int getImg() const;

    void setImg(int img);
};


#endif //CLASSESOVERLOADING_COMPLEX_H
