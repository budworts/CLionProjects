//
// Created by Steven Budworth on 08/06/2021.
//

#include "Student.h"


Student::Student(
        int rollNum,
        string name,
        int mathsMark,
        int englishMark,
        int artMark)
        : rollNum(rollNum),
        name(name),
        mathsMark(mathsMark),
        englishMark(englishMark),
        artMark(artMark) {
}

Student::~Student() {
}

int Student::totalMarks() {
    return mathsMark + englishMark + artMark;
}

char Student::grade() {

    float average = totalMarks() / 3;

    if ( average < 40 ) {
        return 'C';
    } else if ( average >= 40 && average <= 60) {
        return 'B';
    } else {
        return 'A';
    }
}

int Student::getrollNum() const {
    return rollNum;
}

void Student::setrollNum(int rollNum) {
    Student::rollNum = rollNum;
}

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

int Student::getMathsMark() const {
    return mathsMark;
}

void Student::setMathsMark(int mathsMark) {
    Student::mathsMark = mathsMark;
}

int Student::getEnglishMark() const {
    return englishMark;
}

void Student::setEnglishMark(int englishMark) {
    Student::englishMark = englishMark;
}

int Student::getArtMark() const {
    return artMark;
}

void Student::setArtMark(int artMark) {
    Student::artMark = artMark;
}

