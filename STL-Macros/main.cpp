#include <iostream>

#define MAX(a,b) ((a>b)?a:b)
#define SQ(a) a*a
#define SQUARE(a) ((a)*(a))

int main() {
    std::cout << MAX(1,20) << std::endl;
    std::cout << MAX(1.99,1.6) << std::endl;
    std::cout << MAX('U','D') << std::endl;
    std::cout << SQ(5) << std::endl;
    std::cout << 100/SQ(5) << std::endl; // Expected 4, got 100
    std::cout << 100/SQUARE(5) << std::endl; // Got 4
    return 0;
}
