// 2991 사나운 개

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c, d, p, m, n, st, x = 0, y = 0, z = 0;
    cin >> a >> b >> c >> d >> p >> m >> n;
    
    st = 0;
    while (1) {
        if (st < p && p <= st + a) x++;
        if (st < m && m <= st + a) y++;
        if (st < n && n <= st + a) z++;
        if (p <= st && m <= st && n <= st) break;
        st += a + b;
    }
    
    st = 0;
        while (1) {
        if (st < p && p <= st + c) x++;
        if (st < m && m <= st + c) y++;
        if (st < n && n <= st + c) z++;
        if (p <= st && m <= st && n <= st) break;
        st += c + d;
    }
    
    cout << x << '\n' << y << '\n' << z;
    
    return 0;
}
