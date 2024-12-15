#include <iostream>
using namespace std;

int Fibonacci(int n){
  long long Fibonacci[n];

  if (n <= 0) return 0;

  Fibonacci[0] = 0;
  Fibonacci[1] = 1;

  for (int i = 2; i <= n; i++) {
    Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
  }
  return Fibonacci[n];
}

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << Fibonacci(i);
    if ( i % 5 == 0 ) cout << endl;
    else cout << " ";
  }
  return 0;
}