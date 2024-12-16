#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
  if ( n <= 1 ) return false;

  for (int i = 2; i <= sqrt(n); i++){
      if ( n % i == 0 )return false;
    }

  return true;
}

int reverseNumber(int num) {
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return reversed;
}

int main() {
  int n, number;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> number;
    int reversed = reverseNumber(number);

    if ( isPrime(number) && isPrime(reversed) )
      cout << "YES\n";
    else  cout << "NO\n";
  }
  return 0;
}