#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int cnt[1000001];

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n; cin >> n;

    v.push_back(0);
    int first = 1;
    for (int i = 1, a, b; i <= n; i++) {
        cin >> a >> b;
        cnt[i] = a - b;
        v.push_back(first);
        for (int j = 0, c, d; j < b; j++) {
            cin >> c >> d;
        }
        first += a;
    }

    int q, k, x, y; cin >> q;
    while (q--) {
        cin >> k;
        if (k == 1) {
            cin >> x;
            cout << cnt[x] << '\n';
        }
        else {
            cin >> x >> y;
            int pos = find(v.begin(), v.end(), x) - v.begin();
            if (pos > n) pos = upper_bound(v.begin(), v.end(), x) - v.begin() - 1;
            if (k == 2) cnt[pos]++;
            else cnt[pos]--;
        }
    }
    
    return 0;
}