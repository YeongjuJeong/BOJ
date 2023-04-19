// 16693 Pizza Deal

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a1, p1, r1, p2;
    cin >> a1 >> p1 >> r1 >> p2;
    double a2 = r1 * r1 * M_PI;
    double c1 = a1 / p1;
    double c2 = a2 / p2;
    
    if (c1 > c2) cout << "Slice of pizza";
    else cout << "Whole pizza";

    return 0;
}
