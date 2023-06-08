// 26350 Good Coin Denomination

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, x, y, ans; cin >> n;
    for (int i = 0; i < n; i++) {
        x = 0; ans = 1;
        cin >> m;
        cout << "Denominations: ";
        for (int j = 0; j < m; j++) {
            cin >> y;
            cout << y << ' ';
            if (x * 2 > y) ans = 0;
            x = y;
        }
        if (ans) cout << "\nGood coin denominations!\n\n";
        else cout << "\nBad coin denominations!\n\n";
    }
    
    return 0;
}
