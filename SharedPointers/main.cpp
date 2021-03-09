#include <iostream>
#include <vector>

#include "Test.h"

void func(std::shared_ptr<Test> p);

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

    {
        using namespace std;
        cout << "Section 1:\n";

        shared_ptr<int> p1 = make_shared<int>(100);
        cout << "p1 use count = "  << p1.use_count() << endl;
        shared_ptr<int> p2  {p1};
        cout << "p1 use count = "  << p1.use_count() << endl;
        p1.reset();
        cout << "p1 use count = "  << p1.use_count() << endl;
        cout << "p2 use count = "  << p2.use_count() << endl;

        {
            cout << "Test starts....\n";
            shared_ptr<Test> p = make_shared<Test>(100);
            func(p);
            cout << "p use count = " << p.use_count() << endl;

            {
                shared_ptr<Test> p1 = p;
                cout << "\tp use count = " << p.use_count() << endl;

                {
                    shared_ptr<Test> p2 = p;
                    cout << "\t\tp use count = " << p.use_count() << endl;
                    cout << "\t\tp.reset()\n";
                    p.reset();
                    cout << "\t\tp2 use count = " << p2.use_count() << endl;
                }

                cout << "\tp1 use count = " << p1.use_count() << endl;
            }

            cout << "p use count = " << p.use_count() << endl;

            cout << "Test ends....\n";
        }

    }
    
    return 0;
}

void func(std::shared_ptr<Test> p) {
    std::cout << "func - use count: " << p.use_count() << std::endl;
}