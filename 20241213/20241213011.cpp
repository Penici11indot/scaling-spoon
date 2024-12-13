#include <iostream>
using namespace std;

bool isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfYear(int year, int month, int day) {
  int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (isLeapYear(year))
    daysInMonth[2] = 29;

  int totalDays = 0;
  for (int i = 1; i < month; i++)
    totalDays += daysInMonth[i];

  return totalDays + day;
}

int main() {
  int year, month, day;
  cin >> year >> month >> day;
  int result = dayOfYear(year, month, day);
  cout << year << "年" << month << "月" << day << "日是" << year << "的第" << result << "天" <<endl;
}