#include <iostream>
#include "Student.h"

using namespace std;

int main() {

    int rollNum;
    string name;
    int mathsMark;
    int englishMark;
    int artMark;

    cout << "Enter roll number: ";
    cin >> rollNum;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter 3 marks..." << endl;
    cin >> mathsMark >> englishMark >> artMark;

    Student s( rollNum, name, mathsMark, englishMark, artMark );
    cout << "Student: " << s.getName() << " total: " << s.totalMarks() << " grade: " << s.grade() << endl;

    return 0;
}
