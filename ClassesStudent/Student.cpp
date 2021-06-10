//
// Created by Steven Budworth on 08/06/2021.
//

#include "Student.h"


Student::Student(int roll, const string &name, int mathsMark, int englishMark, int artMark) : roll(roll), name(name),
                                                                                              mathsMark(mathsMark),
                                                                                              englishMark(englishMark),
                                                                                              artMark(artMark) {
}

Student::Student() {}


Student::~Student() {
}



int Student::getRoll() const {
    return roll;
}

void Student::setRoll(int roll) {
    Student::roll = roll;
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

