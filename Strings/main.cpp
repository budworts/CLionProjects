#include <iostream>
#include <string>

using namespace std;

void f1();
void f2();
void readKB();
void strTo();
void tokens();
void stringClass();

int main() {
    std::cout << __cplusplus << std::endl;

    // f1();
    // f2();
    // readKB();
    // strTo();
    // tokens();
    stringClass();

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
    cin.getline(s1,50);
    cout << s1 << endl;

    // This would store the new line for the next cin.get()
    // cin.get(s1,50);
    // fix
    // cin.ignore();
}

void f2() {
    char s1[20] = "Programming";

    cout << strchr(s1,'g') << endl;
    cout << strrchr(s1,'m') << endl;

    char s2[] = "mello";
    char s3[] = "hello";

    cout << strcmp(s2, s3) << endl;
}

void strTo() {
    char s1[] = "235";
    char s2[] = "55.99";

    //str to long
    long int x = strtol(s1,nullptr,10);
    cout << x << endl;

    //str to float
    float y = strtof(s2,nullptr);
    cout << y << endl;
}

void tokens() {
    char s1[] = "x=10;y=20;z=30";

//    char *tok = strtok(s1,"=;");
//
//    while (tok != nullptr) {
//        cout << tok << endl;
//        tok = strtok( nullptr, "=;");
//    }

    char *tok = strtok(s1,";");

    while (tok != nullptr) {
        cout << tok << endl;
        tok = strtok( nullptr, ";");
    }
}

void stringClass() {
    string s = "Hello";
    cout << s << endl;
    cout << "Length : " << s.length() << endl;
    cout << "Size : " << s.size() << endl;
    cout << "Capacity : " << s.capacity() << endl;
    cout << "s.resize(30);" << endl;
    s.resize(30);
    cout << s << endl;
    cout << "Length : " << s.length() << endl;
    cout << "Size : " << s.size() << endl;
    cout << "Capacity : " << s.capacity() << endl;
    cout << "Max size : " << s.max_size() << endl;

    s.clear();

    if ( s.empty() ) {
        cout << "string is empty\n";
    }

    s = "Hello again";
    cout << s << endl;
    cout << "Length : " << s.length() << endl;
    cout << "Size : " << s.size() << endl;
    cout << "Capacity : " << s.capacity() << endl;

    s.append(" steve");
    cout << s << endl;
    s.insert(5, " world");
    cout << s << endl;
    s.replace(6,5,"earth");
    cout << s << endl;
    s.replace(6,5,"1234567890123999999966666666666645");
    cout << s << endl;
    cout << "Capacity : " << s.capacity() << endl;
    s.erase();  // same as clear();
    s = "Hello again";
    s.push_back('!');
    cout << s << endl;
    s.pop_back();
    cout << "s: " << s << endl;
    string s1 = "Goodbye";
    cout << "s1: " << s1 << endl;
    s.swap(s1);
    cout << "s: " << s << endl;
    cout << "s1: " << s1 << endl;
}