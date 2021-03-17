//
// Created by Steven Budworth on 17/03/2021.
//

#ifndef STL_CLASSTEMPLATES_ITEM_H
#define STL_CLASSTEMPLATES_ITEM_H

#include <iostream>

template <typename T>
class Item {
private:
    std::string name;
    T value;
public:
    Item( std::string name,T value) : name{name}, value{value} {}
    std::string getName() const {return name;}
    T getValue() const {return value;}
};

#endif //STL_CLASSTEMPLATES_ITEM_H
