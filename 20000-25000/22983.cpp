#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

string arr[3003];
ll dp[3003][3003];

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) dp[i][j] = 1;

    ll sum = n * m;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j] == arr[i - 1][j - 1]
                && arr[i][j] != arr[i - 1][j]
                && arr[i][j] != arr[i][j - 1]) {
                dp[i][j] = min({ dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1] }) + 1;
                sum += dp[i][j] - 1;
            }
        }
    }

    cout << sum << '\n';

    return 0;
}