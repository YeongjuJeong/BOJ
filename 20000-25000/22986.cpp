#include <iostream>
#define ll long long
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        if (k == 0) {
            cout << 4 * n << '\n';
            continue;
        }
        if (k > n) k = n;
        
        ll a = n;
        ll l = n + k * (-1);
        ll sum = (k + 1) * (a + l) * 2;

        cout << sum << '\n';
    }

    return 0;
}