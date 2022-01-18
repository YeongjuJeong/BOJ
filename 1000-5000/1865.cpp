#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;

long long dist[501];

int belmanford(vector<pair<int, int>> v[501], int n) {
	fill(dist, dist + n + 1, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 0; k < v[j].size(); k++) {
				int next = v[j][k].first;
				int cost = v[j][k].second;

				if (dist[next] > dist[j] + cost) {
					dist[next] = dist[j] + cost;
					if (i == n - 1) return 1;
				}
			}
		}
	}
	
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, m, w;
		cin >> n >> m >> w;

		vector<pair<int, int>> v[501];

		for (int i = 0, a, b, c; i < m; i++) {
			cin >> a >> b >> c;
			v[a].push_back({ b, c });
			v[b].push_back({ a, c });
		}

		for (int i = 0, a, b, c; i < w; i++) {
			cin >> a >> b >> c;
			v[a].push_back({ b, -c });
		}

		int cycle = belmanford(v, n);

		if (cycle) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}