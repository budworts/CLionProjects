#include <iostream>

#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Line.h"

void screen_refresh(const std::vector<Shape *> &shapes);

int main() {

    std::cout << "c++ version: " << __cplusplus << std::endl;

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1,s2,s3};

    screen_refresh(shapes);
    delete s1;
    delete s2;
    delete s3;
    return 0;
}

void screen_refresh(const std::vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto p: shapes)
        p->draw();
}
