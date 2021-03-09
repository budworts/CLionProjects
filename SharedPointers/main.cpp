#include <iostream>
#include <vector>

int main() {

    std::cout << "C++ version : " << __cplusplus << std::endl;

    std::shared_ptr<int> p1 {new int(100)};
    std::cout << "p1 use count = "  << p1.use_count() << std::endl;
    std::shared_ptr<int> p2 {p1};
    std::cout << "p1 use count = "  << p1.use_count() << std::endl;
    std::cout << "p2 use count = "  << p2.use_count() << std::endl;

    std::cout << "p1.reset();\n";
    p1.reset();
    std::cout << "p1 use count = "  << p1.use_count() << std::endl;
    std::cout << "p2 use count = "  << p2.use_count() << std::endl;

    std::vector<std::shared_ptr<int>> vec;
    std::shared_ptr<int> p {new int{100}};
    vec.push_back(p);  // Copy placed in vector
    std::cout << "p.use_count = " << p.use_count() << std::endl;


    
    return 0;
}
