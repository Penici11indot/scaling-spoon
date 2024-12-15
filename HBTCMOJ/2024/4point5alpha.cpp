#include <iostream>
using namespace std;

int main(){
  int n, a, result = 0, temp = 0;
  cin >> n >> a;

  for(int i = 1; i <= n; i++){
    temp = temp * 10 + a;
    result += temp;
  }
  cout << result << endl;
  return 0;
}