#include <iostream>
using namespace std;

void isPass(int num){
  cout << ( num >= 60 ? "Pass" : "Fail" );
}

int main(){
  int repeat, grade;
  cin >> repeat;
  for (int i = 1; i <= repeat; i++){
    cin >> grade;
    isPass(grade);

    if (i != repeat) cout << " ";
  }
  return 0;
}