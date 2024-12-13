#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double o1 = (x1+x2)/2;
    double o2 = (y1+y2)/2;

    cout << "(" << o1 << "," << o2 << ")";

    return 0;
}
