#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x0 , y0 , x , y , r;
  cin >> x0 >> y0 >> r >> x >> y;

  double distance = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

  if (distance < r)
    cout << "in" << endl;
  else if (distance > r)
    cout << "out" << endl;
  else if (distance == r)
    cout << "on" << endl;

  return 0;
}