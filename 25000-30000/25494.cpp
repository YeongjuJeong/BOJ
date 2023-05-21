// 25494 단순한 문제 (Small)

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t, a, b, c; cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int sum = 0;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                for (int k = 1; k <= c; k++) {
                    if (i % j == j % k && j % k == k % i) sum++;
                }
            }
        }
        cout << sum << '\n';
    }
    
    return 0;
}
