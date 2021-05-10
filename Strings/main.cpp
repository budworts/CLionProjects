#include <iostream>

using namespace std;

void f1();
void readKB();

int main() {
    std::cout << __cplusplus << std::endl;

    f1();
    readKB();

    return 0;
}

void f1() {
    char s1[10] = "Hello";
    cout << s1 << endl;

    char s2[] = {'H','e','l','l','o','\0'};
    cout << s2 << endl;

    char s3[] = {'H','e','l','l','o','\0','p','p','p'};
    cout << s3 << endl;

    char s4[] = {65,66,67,68,0};
    cout << s4 << endl;
}

void readKB() {
    char s1[50];

    cout << "Enter your full name:";

    // only first name stored
//    cin >> s1;
//    cout << s1 << endl;

    // use
    cin.get(s1,50);
    // or
    //cin.getline(s,50);
    cout << s1 << endl;

}