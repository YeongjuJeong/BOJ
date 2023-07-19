// 2547 사탕 선생 고창영

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    long long t, n, c, sum;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> c;
            sum = (sum + c) % n;
        }
        if (sum) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
