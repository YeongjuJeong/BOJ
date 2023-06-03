// 25932 Find the Twins

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, z, x; cin >> n;
    for (int i = 0; i < n; i++) {
        m = 0; z = 0;
        for (int j = 0; j < 10; j++) {
            cin >> x;
            if (x == 17) z = 1;
            else if (x == 18) m = 1;
            cout << x << ' ';
        }
        cout << '\n';
        if (z && m) cout << "both\n\n";
        else if (z && !m) cout << "zack\n\n";
        else if (!z && m) cout << "mack\n\n";
        else cout << "none\n\n";
    }

    return 0;
}
