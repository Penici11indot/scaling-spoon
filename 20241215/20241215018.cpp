#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x1 , x2 , y1 , y2;
  cin >> x1 >> y1 >> x2 >> y2;
  double distance1 = sqrt( pow( x1 , 2 ) + pow( y1 , 2 ) );
  double distance2 = sqrt( pow( x2 , 2 ) + pow( y2 , 2 ) );

  if ( distance2 < distance1 )
    cout << "("  << x2 << "," << y2 << ")" << endl;
  else cout << "(" << x1 << "," << y1 << ")" << endl;

  return 0;
}
