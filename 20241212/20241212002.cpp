#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int h1, m1, h2, m2;
  cin >> h1 >> m1 >> h2 >> m2;

  int M1 = h1 * 60 + m1;
  int M2 = h2 * 60 + m2;
  int deltaM = abs(M2 - M1);
  int deltah = deltaM / 60;
  int deltam = deltaM % 60;

  cout << deltah << "h:" << deltam << "m" << endl;

  return 0;
}