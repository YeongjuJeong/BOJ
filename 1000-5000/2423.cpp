#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 252525 // 500(n) * 500(m)
using namespace std;

vector<pair<int, pair<int, int>>> connect[510][510];
priority_queue<pair<int, pair<int, int>>> pq;

int n, m;
int cost[510][510];

void dijkstra() {
	for (int i = 0; i <= n; i++) fill(cost[i], cost[i] + m + 1, INF);

	pq.push({ 0, {0, 0} });
	cost[0][0] = 0;

	while (!pq.empty()) {
		int cc = -pq.top().first;
		int x = pq.top().second.first;
		int y = pq.top().second.second;
		pq.pop();

		if (cc > cost[x][y]) continue;

		for (int i = 0; i < connect[x][y].size(); i++) {
			int nc = cc + connect[x][y][i].first;
			int a = connect[x][y][i].second.first;
			int b = connect[x][y][i].second.second;

			if (nc < cost[a][b]) {
				cost[a][b] = nc;
				pq.push({ -nc, {a, b} });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) {
			if (s[j] == '/') {
				connect[i][j].push_back({ 1, {i + 1, j + 1} });
				connect[i + 1][j + 1].push_back({ 1, {i, j} });
				connect[i + 1][j].push_back({ 0, {i, j + 1} });
				connect[i][j + 1].push_back({ 0, {i + 1, j} });
			}
			else {
				connect[i][j].push_back({ 0, {i + 1, j + 1} });
				connect[i + 1][j + 1].push_back({ 0, {i, j} });
				connect[i + 1][j].push_back({ 1, {i, j + 1} });
				connect[i][j + 1].push_back({ 1, {i + 1, j} });
			}
		}
	}

	dijkstra();

	if (cost[n][m] == INF) cout << "NO SOLUTION\n";
	else cout << cost[n][m] << '\n';

	return 0;
}