#include <iostream>
using namespace std;

bool is17Multipule(int n){
    return ( n % 17 == 0 );
}
int main(){

  for (int i = 1; i <= 1000; i++){
    if (is17Multipule(i) && i % 5 != 0)
      cout << i << " ";
    else if (is17Multipule(i) && i % 5 == 0)
      cout << i << endl;
  }
  return 0;
}
