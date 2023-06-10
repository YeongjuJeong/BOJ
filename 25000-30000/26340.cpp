// 26340 Fold the paper nicely

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, a, b, c, d, x; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> x;
        c = a; d = b;
        for (int j = 0; j < x; j++) {
            if (c >= d) c /= 2;
            else d /= 2;
        }
        cout << "Data set: " << a << ' ' << b << ' ' << x << '\n' << max(c, d) << ' ' << min(c, d) << "\n\n";
    }
    
    return 0;
}
