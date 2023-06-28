// 4084 Viva la Diferencia

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c, d, w, x, y, z, cnt;
    while (1) {
        cnt = 0;
        cin >> a >> b >> c >> d;
        if (!a && !b && !c && !d) break;
        while (1) {
            if (a == b && b == c && c == d) break;
            w = abs(a - b);
            x = abs(b - c);
            y = abs(c - d);
            z = abs(d - a);
            a = w; b = x; c = y; d = z;
            cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
