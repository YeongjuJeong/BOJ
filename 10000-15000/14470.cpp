// 14470 전자레인지

#include <iostream>
using namespace std;

int main() {
    // 원래 고기 온도 a, -100 <= a <= 100, a != 0
    // 목표 온도 b, 1 <= b <= 100, a < b
    // 얼어 있는 고기를 1'C 데우는 데 걸리는 시간 c
    // 얼어 있는 고기를 해동하는 데 걸리는 시간 d
    // 얼어 있는 않은 고기를 1'C 데우는 데 걸리는 시간 e
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    if (a < 0) cout << c * (-1) * a + d + e * b;
    else cout << (b - a) * e;
    return 0;
}
