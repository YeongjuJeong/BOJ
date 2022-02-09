#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n; cin >> n;
    
    for (int i = 0, x, y; i < n; i++) {
        cin >> x >> y;
        v.push_back({ x, y });
    }

    sort(v.begin(), v.end());

    int ans = 0;
    int start = v[0].first, end = v[0].second;
    for (int i = 1; i < n; i++) {
        if (end < v[i].first) {
            ans += end - start;
            start = v[i].first;
            end = v[i].second;
            continue;
        }

        end = max(end, v[i].second);
    }

    ans += end - start;

    cout << ans << '\n';

    return 0;
}