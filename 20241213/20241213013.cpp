#include <iostream>
using namespace std;

bool isEven(int number){
  return number % 2 == 0;
}

int main(){
  int number;
  cin >> number;

  if(isEven(number))
    cout << number << " is an even number" << endl;
  else cout << number << " is an odd number" << endl;

  return 0;
}