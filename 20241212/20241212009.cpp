#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = n / 100;
  int b = n / 10 % 10;
  int c = n % 10;
  int m = a + b * 10 + c * 100;
  cout << m << endl;

  return 0;
}