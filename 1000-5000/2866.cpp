#include <iostream>
#include <algorithm>
using namespace std;

string s[1004];
long long hashing[1004][1004];

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> s[i];

    long long p = 1;
    for (int r = n - 1; r >= 0; r--, p = p * 27)
        for (int c = 0; c < m; c++)
            hashing[r][c] = hashing[r + 1][c] + (s[r][c] - 'a' + 1) * p;

    for (int i = 1; i < n; i++) {
        sort(hashing[i], hashing[i] + m);
        for (int j = 0; j < m - 1; j++) {
            if (hashing[i][j] == hashing[i][j + 1]) {
                cout << i - 1 << '\n';
                return 0;
            }
        }
    }

    cout << n - 1 << '\n';

    return 0;
}