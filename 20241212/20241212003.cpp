#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double dx = x2 - x1;
  double dy = y2 - y1;
  double d = sqrt(pow(dx, 2) + pow(dy, 2));

  cout << d << endl;

  return 0;
}