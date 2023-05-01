// 20867 Rulltrappa

#include <iostream>
using namespace std;

int main() {
    double m, s, g, a, b, l, r;
    cin >> m >> s >> g >> a >> b >> l >> r;
    double sum1 = (1.0 / a) * l + m / g; // 왼쪽 줄 (걷기)
    double sum2 = (1.0 / b) * r + m / s; // 오른쪽 줄 (가만히)
    if (sum1 > sum2) cout << "latmask";
    else cout << "friskus";
    return 0;
}
