#include <iostream>
#include <vector>
#define ll long long
#define INF 1e17
using namespace std;

vector<pair<ll, ll>> v[1001];
int visit[1001];

ll f(int cur) {
    ll sum = 0;
    for (int i = 0; i < v[cur].size(); i++) {
        if (!visit[v[cur][i].first]) {
            visit[v[cur][i].first] = 1;
            if (v[v[cur][i].first].size() == 1) sum += v[cur][i].second;
            else sum += min(v[cur][i].second, f(v[cur][i].first));
        }
    }

    return sum;
}

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, n, m; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < 1001; i++) {
            v[i].clear();
            visit[i] = 0;
        }
        for (int i = 0, a, b, c; i < m; i++) {
            cin >> a >> b >> c;
            v[a].push_back({ b, c });
            v[b].push_back({ a, c });
        }

        visit[1] = 1;
        cout << f(1) << '\n';
    }

    return 0;
}
