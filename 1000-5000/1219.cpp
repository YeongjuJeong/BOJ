#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;

vector<pair<int, int>> v[101];

int money[101], gee[101];
long long dist[101];
int visit[101];

void belmanford(int start, int n) {
	fill(dist, dist + n, -INF);

	dist[start] = money[start];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < v[j].size(); k++) {
				int next = v[j][k].first;
				int cost = v[j][k].second;
				if (dist[j] != -INF && dist[next] < dist[j] + money[next] - cost) {
					dist[next] = dist[j] + money[next] - cost;
					if (i == n - 1) gee[next] = 1;
				}
			}
		}
	}
}

void dfs(int start) {
	for (int i = 0; i < v[start].size(); i++) {
		int next = v[start][i].first;
		if (!visit[next]) {
			visit[next] = 1;
			gee[next] = 1;
			dfs(next);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, st, en, m;
	cin >> n >> st >> en >> m;

	for (int i = 0, a, b, c; i < m; i++) {
		cin >> a >> b >> c;
		v[a].push_back({ b, c });
	}

	for (int i = 0; i < n; i++)
		cin >> money[i];

	belmanford(st, n);

	for (int i = 0; i < n; i++)
		if (gee[i] && !visit[i]) dfs(i);

	if (gee[en]) cout << "Gee\n";
	else if (dist[en] == -INF) cout << "gg\n";
	else cout << dist[en] << '\n';

	return 0;
}