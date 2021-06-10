//
// Created by Steven Budworth on 08/06/2021.
//

#ifndef CLASSESSTUDENT_STUDENT_H
#define CLASSESSTUDENT_STUDENT_H

#include <iostream>

using namespace std;

class Student {

private:

    int rollNum;
    string name;
    int mathsMark;
    int englishMark;
    int artMark;

public:

    Student();

    Student(int rollNum, string name, int mathsMark, int englishMark, int artMark);

    ~Student();

    int totalMarks();

    char grade();

    int getrollNum() const;

    void setrollNum(int rollNum);

    const string &getName() const;

    void setName(const string &name);

    int getMathsMark() const;

    void setMathsMark(int mathsMark);

    int getEnglishMark() const;

    void setEnglishMark(int englishMark);

    int getArtMark() const;

    void setArtMark(int artMark);

};


#endif //CLASSESSTUDENT_STUDENT_H
