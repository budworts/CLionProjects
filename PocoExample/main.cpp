#include <Poco/String.h>
#include "Poco/DateTime.h"
#include <iostream>
#include <ctime>

using Poco::trim;
using Poco::trimLeft;
using Poco::trimRight;
using Poco::trimRightInPlace;
using Poco::Timestamp;
using Poco::DateTime;

void myTrim();
void myTime();
void myDateTime();

int main(int argc, char** argv)
{
    myTrim();
    myTime();
    myDateTime();

    return 0;
}

void myDateTime() {

    DateTime now;
    int year   = now.year();
    int month  = now.month();
    int day = now.day();
    int dow = now.dayOfWeek();
    int hour = now.hour();
    int hour12 = now.hourAMPM();

    std::cout << "year = " << year << std::endl;
    std::cout << "month = " << month << std::endl;
    std::cout << "dow = " << dow << std::endl;
    std::cout << "day = " << day << std::endl;
    std::cout << "hour = " << hour << std::endl;
    std::cout << "hour12 = " << hour12 << std::endl;
}

void myTime() {
    Timestamp now;
    std::time_t t1 = now.epochTime();
    Timestamp ts1(Timestamp::fromEpochTime(t1));
    for (int i = 0; i < 100000; ++i);
    Timestamp::TimeDiff diff = now.elapsed();
    Timestamp start(now);
    now.update();
    diff = now - start;
}

void myTrim() {
    std::string hello("  Hello, world!  ");
    std::string s1(trimLeft(hello));     // "Hello, world!  "
    trimRightInPlace(s1);             // "Hello, world!"
    std::string s2(trim(hello));         // "Hello, world!"

    std::cout << s1 << std::endl;
}