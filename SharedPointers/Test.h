//
// Created by Steven Budworth on 09/03/2021.
//

#ifndef SHAREDPOINTERS_TEST_H
#define SHAREDPOINTERS_TEST_H

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};

#endif //SHAREDPOINTERS_TEST_H
