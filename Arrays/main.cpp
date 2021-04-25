#include <iostream>

int main() {

    std::cout << "c++ version: " << __cplusplus << std::endl;

    int ai1[10] = {5,10,15,20,25};  // Array 5,10,15,20,25,0,0,0,0,0

    for (auto i=0;i<10;i++) {
        std::cout << ai1[i] << " ";
    }

    std::cout << std::endl;

    int ai2[] = {5,10,15,20,25};

    for (auto i=0;i<5;i++) {
        std::cout << ai2[i] << " ";
    }

    std::cout << std::endl;

    int ai3[50];  // Junk

    for (auto i=0;i<50;i++) {
        std::cout << ai3[i] << " ";
    }

    std::cout << std::endl;

    int ai4[50] = {0};

    for (auto i=0;i<50;i++) {
        std::cout << ai4[i] << " ";
    }

    std::cout << std::endl;

    // ***********************
    int ai5[] = {0,1,2,3,4,5,6};

    for (auto i:ai5) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    int ai6[10] = {3,4,5,6};

    for (auto i:ai6) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    // ***********************

    char ac1[] = {'A', 66, 'C', 68};

    for (auto i:ac1) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (int i:ac1) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
