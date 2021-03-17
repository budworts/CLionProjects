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

template <typename T>
void swap(T &a,T &b) {
    T temp = a;
    a = b;
    b = temp;
}

struct Person {
    std::string name;
    int age;

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name;
    return os;
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
    Person p1{"Dave", 58};
    Person p2{"Fred", 55};
    Person p3 = min(p1,p2);
    std::cout << "Name: " << p3.name << std::endl;
    func(p1,p2);
    swap(p1,p2);
    func(p1,p2);
}