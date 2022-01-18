#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;

int n, m;
long long dist[501];
vector<pair<int, int>> v[501];

int bf(int start) {
	fill(dist, dist + n + 1, INF);
	dist[start] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 0; k < v[j].size(); k++) {
				int next = v[j][k].first;
				int cost = v[j][k].second;
				if (dist[j] != INF && dist[next] > dist[j] + cost) {
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
	cin >> n >> m;
	for (int i = 0, a, b, c; i < m; i++) {
		cin >> a >> b >> c;
		v[a].push_back({ b, c });
	}
	int cycle = bf(1);
	if (cycle) cout << "-1\n";
	else {
		for (int i = 2; i <= n; i++) {
			if (dist[i] == INF) cout << "-1\n";
			else cout << dist[i] << '\n';
		}
	}
	return 0;
}