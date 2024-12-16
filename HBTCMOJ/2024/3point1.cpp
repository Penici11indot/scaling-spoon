#include <iostream>
using namespace std;

bool isEven(int num){
  return ( num % 2 == 0);
}

int main(){
  int num;
  cin>>num;

  if(isEven(num))
    cout<<"even number";
  else cout <<"odd number";

  return 0;
}