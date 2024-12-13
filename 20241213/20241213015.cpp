#include <iostream>
#include <cmath>
using namespace std;

int main() {

  double height,weight;
  cin>>height>>weight;
  double BMIvalue = weight / pow( height , 2 );

  if (BMIvalue < 18.5)
    cout << "thin" << endl;
  if (BMIvalue >= 18.5 && BMIvalue <= 24.0)
    cout << "normal" << endl;
  if (BMIvalue > 24.0 && BMIvalue <= 28.0)
    cout << "overweight" << endl;
  if (28.0 < BMIvalue )
    cout << "fat" << endl;

  return 0;
}