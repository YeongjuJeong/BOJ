// 17356 욱 제

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b; cin >> a >> b;
    double m = (b - a) / 400;
    cout << fixed << setprecision(5) << 1 / (1 + pow(10, m));
    return 0;
}
