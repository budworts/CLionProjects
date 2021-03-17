#include <iostream>
#include <vector>
#include <utility>

#include "Item.h"

template <typename T1, typename T2>
struct MyPair {
    T1 first;
    T2 second;
};

int main() {

    Item<int> i1{"Dave",100};
    std::cout << i1.getName() << " " << i1.getValue() << std::endl;

    Item<double> i2{"Fred",100.00};
    std::cout << i2.getName() << " " << i2.getValue() << std::endl;

    Item<std::string> i3{"Fred","Boss"};
    std::cout << i3.getName() << " " << i3.getValue() << std::endl;

    Item<Item<std::string>> i4{"Steve", {"C++","Student"}};
    std::cout << i4.getName() << " "
        << i4.getValue().getName() << " "
        <<i4.getValue().getValue() << std::endl;

    std::vector<Item<double>> vec;
    vec.push_back(Item<double>("Fred",100.0));
    vec.push_back(Item<double>("Dave",200.0));
    vec.push_back(Item<double>("Paul",300.0));

    for ( const auto &item:vec ) {
        std::cout << item.getName() << " " << item.getValue() << std::endl;
    }

    MyPair<std::string, int> p1{"Frank", 100};
    MyPair<int, double> p2{ 10, 100.99};
    std::vector<MyPair<int,double>> vec2;

    std::pair<std::string,int> p3{"Steve",59};
    std::cout << p3.first << std::endl;
    std::cout << p3.second << std::endl;
    return 0;
}
