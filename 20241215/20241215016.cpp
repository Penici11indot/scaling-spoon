#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin>>n;

  int a = n / 100;
  int b = n % 100 / 10;
  int c = n % 10;

  cout << ( n == pow( a , 3 ) + pow( b , 3 ) + pow( c , 3 ) ? "yes" : "no");

  return 0;
}
