#include <iostream>
using namespace std;

int main() {
  double n;
  cin>>n;

  if( n< 1000)
    cout << n << endl;
  else if( 1000 <= n && n < 2000)
    cout << n *  0.9 << endl;
  else if( 2000 <= n && n < 3000)
    cout << n *  0.85 << endl;
  else if( 3000 <= n && n < 4000)
    cout << n *  0.8 << endl;
  else if( 4000 <= n && n < 5000)
    cout << n *  0.75 << endl;
  else if( 5000 <= n)
    cout << n *  0.7 << endl;

  return 0;
}
