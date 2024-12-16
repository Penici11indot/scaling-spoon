#include <iostream>
using namespace std;

bool isLeap(int year){
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main(){
    int count = 0;
    for (int i = 1900 ; i <= 2000 ; i++) {
        if ( isLeap(i) ) {
            cout << i << " ";
            count++;
            if ( count % 5 == 0 ) cout << endl;
        }
    }
    return 0;
}
