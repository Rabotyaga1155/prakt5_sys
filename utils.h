#ifndef UTILS_H
#define UTILS_H

#include <iostream>

struct Date {
    int year;
    int month;
    int day;
};

bool isVsk(int year);

int daysBeg(Date& date);
int daysBeg(int year, int month, int day);
int daysBeg(int month, int day);

#endif
