#include <iostream>
#include <cmath>
using namespace std;

int main() {
  const double pi = 3.1415;
  double r;
  cin >> r;
  double c = 2 * pi * r;
  double s = pow(r, 2) * pi;
  cout << c << " " << s << endl;
  return 0;
}
