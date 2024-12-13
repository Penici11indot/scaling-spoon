#include <iostream>
using namespace std;

int main(){
  int a,b,c,num;
  cin>>a>>b>>c;

  if(a >= b && a >= c)
    num = a;
  if(b >= a && b >= c)
    num = b;
  if(c >= a && c >= b)
    num = c;

  cout<<num<<endl;

  return 0;
}