#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int s = 1;
  double n = 1, t = 1, pi = 0;
  while ( ( fabs(t) ) > 1e-6 ){
      pi += t;
      n = n + 2;
      s = -s;
      t = s / n;
    }
  pi = pi * 4;
  cout << setiosflags(ios::fixed) << setprecision(5) << pi << endl;

  return 0;
}