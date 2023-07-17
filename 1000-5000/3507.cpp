// 3507 Automated Telephone Exchange

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, ans = 0; cin >> n;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (i + j == n) ans++;
            if (i + j > n) break;
        }
    }
    cout << ans;
    
    return 0;
}
