#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  if( n <= 100 && n >= 90)
    cout << "A" << endl;
  else if( n <= 89 && n >= 80)
    cout << "B" << endl;
  else if( n <= 79 && n >= 70)
    cout << "C" << endl;
  else if( n <= 69 && n >= 60)
    cout << "D" << endl;
  else if( n <= 0 && n >= 50)
    cout << "E" << endl;
  else cout << "error!" << endl;

  return 0;
}
