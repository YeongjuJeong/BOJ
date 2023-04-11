#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x; cin >> x;
    cout << fixed << setprecision(7) << 4 * sqrt(x);
    return 0;
}
