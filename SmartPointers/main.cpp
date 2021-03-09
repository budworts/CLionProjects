#include <iostream>

#include "Test.h"

int main() {

    std::cout << "C++ version : " << __cplusplus << std::endl;

    Test t1( 1000 );

    Test *t2 = new Test(2000);
    delete t2;

    std::unique_ptr<Test> t3(new Test(3000));

    std::unique_ptr<Test> t4 = std::make_unique<Test>(4000);

    std::unique_ptr<Test> t5;
    // t5 = t3;   * not allowed to assign
    t5 = std::move(t4); // t4 now null

    if (!t4) {
        std::cout << "t4 is a null pointer..." << std::endl;
    }

    return 0;
}
