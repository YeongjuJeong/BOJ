#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, ans = 0; cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i = n - 1; i > 0; i--) {
        int sum = v[i] + v[i - 1];
        ans += v[i] * v[i - 1];
        v.pop_back();
        v.pop_back();
        v.push_back(sum);
    }

    cout << ans << '\n';

    return 0;
}