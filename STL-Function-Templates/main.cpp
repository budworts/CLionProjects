#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a>b) ? a:b;
}

template <typename T>
T min(T a, T b) {
    return (a<b) ? a:b;
}

template <typename T1, typename T2>
void func(T1 a,T2 b) {
    std::cout << "---- " << a << " - " << b << " ----" << std::endl;
}

void example1();
void example2();

int main() {

    example1();
    example2();

    return 0;
}

void example1() {

    int a{10};
    int b{11};

    double c{1.11};
    double d{.09};

    char e{'A'};
    char f{'w'};

    std::cout << max<int>(a,b) << std::endl;
    std::cout << min<int>(a,b) << std::endl;
    std::cout << max<double>(c,d) << std::endl;
    std::cout << max<char>(e,f) << std::endl;

    func<int,double>(10,1.99);
    func('a', 9.99);
    func(.1,"Hello");
}

void example2() {

}