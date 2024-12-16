#include <iostream>
using namespace std;

int main(){
  int count = 0;
  for (int i = 1000 ; i <= 2000 ; i++) {
      if ( i % 17 == 0 ) {
          cout << i << " ";
          count++;
          if ( count % 5 == 0 ) cout << endl;
      }
  }
  return 0;
}
