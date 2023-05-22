// 25591 푸앙이와 종윤이

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int m, n, a, b, c, d, e, f, g, h;
    cin >> m >> n;
    a = 100 - m;
    b = 100 - n;
    c = 100 - (a + b);
    d = a * b;
    e = d / 100;
    f = d % 100;
    g = c + e;
    h = f;
    
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << '\n';
    cout << g << ' ' << h;
    
    return 0;
}
