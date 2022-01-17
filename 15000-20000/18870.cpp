#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;
int ans[1000001];

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    int n;
    cin >> n;

    for (int i = 0, x; i < n; i++) {
        cin >> x;
        v.push_back({ x, i });
    }

    sort(v.begin(), v.end());

    int cnt = 0, last;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ans[v[i].second] = cnt;
            last = v[i].first;
        }
        else {
            if (last != v[i].first) cnt++;
            ans[v[i].second] = cnt;
            last = v[i].first;
        }
    }

    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << '\n';

    return 0;
}