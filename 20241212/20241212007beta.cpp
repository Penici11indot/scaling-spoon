#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << " is an " << (n % 2 == 0 ? "even" : "odd") << " number" << endl;
    return 0;
}
