#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    int n; cin >> n;

    cout << (n + 1) * (n + 1) - 1 << '\n';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2) cout << 1 << ' ' << j << '\n';
            else cout << 2 << ' ' << j << '\n';
        }
    }

    for (int i = 1; i <= n; i++) {
        if (n % 2) cout << 2 << ' ' << i << '\n';
        else cout << 1 << ' ' << i << '\n';
    }

    for (int i = n; i > 0; i--) {
        for (int j = n - i + 1; j <= n; j++) {
            if (i % 2) cout << 1 << ' ' << j << '\n';
            else cout << 2 << ' ' << j << '\n';
        }
    }

    return 0;
}
