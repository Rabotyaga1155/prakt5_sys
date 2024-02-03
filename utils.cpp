#include "utils.h"

bool isVsk(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysBeg(Date& date) {
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days = date.day;
    for (int i = 1; i < date.month; ++i) {
        days += daysInMonth[i];
        if (i == 2 && isVsk(date.year))
            ++days;
    }
    return days;
}

int daysBeg(int year, int month, int day) {
    Date date = { year, month, day };
    return daysBeg(date);
}

int daysBeg(int month, int day) {
    Date date = { 2024, month, day };
    return daysBeg(date);
}
