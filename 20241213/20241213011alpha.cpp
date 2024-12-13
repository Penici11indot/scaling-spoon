#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfYear(int year, int month, int day) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    // 累计从1月到上一个月的天数
    int totalDays = 0;
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }

    // 加上当月的天数
    totalDays += day;

    return totalDays;
}

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    int result = dayOfYear(year, month, day);
    cout << result << endl;

    return 0;
}
