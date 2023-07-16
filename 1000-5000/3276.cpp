// 3276 ICONS

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, ans = 10000, mi, mj; cin >> n;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            if (ans < i + j) break;
            if (i * j >= n && i + j < ans) {
                mi = i; mj = j; ans = i + j;
            }
        }
    }
    
    cout << mi << ' ' << mj;

    return 0;
}
