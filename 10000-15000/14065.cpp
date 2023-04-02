// 14065 Gorivo

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x; cin >> x;
    double ans = 378541.178400 / (1609.344000 * x);
    cout << fixed << setprecision(6) << ans;
    return 0;
}
