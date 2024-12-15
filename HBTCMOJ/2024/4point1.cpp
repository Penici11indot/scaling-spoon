#include <iostream>
using namespace std;

int isEven(int num){
  if(num%2==0)
    cout << "even number" << endl;
  else cout << "odd number" << endl;
  return 0;
}

int main(){
  int num;
  while(cin>>num){
    isEven(num);
  }
  return 0;
}