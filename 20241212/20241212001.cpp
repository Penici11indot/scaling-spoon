#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = (num % 100) % 10;
    int sum = a + b + c;

    cout << a << "+" << b << "+" << c << "=" << sum << endl;
    return 0;
}