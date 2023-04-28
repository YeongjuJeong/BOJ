// 20233 Bicycle

#include <iostream>
using namespace std;

int main() {
    int a, x, b, y, t, sum1 = 0, sum2 = 0;
    cin >> a >> x >> b >> y >> t;
    if (t >= 30) sum1 += (t - 30) * x;
    if (t >= 45) sum2 += (t - 45) * y;
    cout << a + sum1 * 21 << ' ' << b + sum2 * 21;

    return 0;
}
