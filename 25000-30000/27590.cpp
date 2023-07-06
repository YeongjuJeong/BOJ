// 27590 Sun and Moon

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    a *= (-1); c *= (-1);
    while (1) {
        if (a < c) a += b;
        else if (a > c) c += d;
        else break;
    }
    cout << a;

    return 0;
}
