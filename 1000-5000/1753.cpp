#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1e9
using namespace std;

int n, e, k;
int dist[20001];

vector<pair<int, int>> v[20001];
priority_queue<pair<int, int>> pq;

void dijkstra() {
	fill(dist, dist + n + 1, INF);
	pq.push({ 0, k });
	dist[k] = 0;

	while (!pq.empty()) {
		int c = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();
		if (dist[cur] < c) continue;

		for (int i = 0; i < v[cur].size(); i++) {
			int nc = v[cur][i].first + c;
			int next = v[cur][i].second;
			if (nc < dist[next]) {
				dist[next] = nc;
				pq.push({ -nc, next });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> e >> k;
	for (int i = 0, a, b, c; i < e; i++) {
		cin >> a >> b >> c;
		v[a].push_back({ c, b });
	}

	dijkstra();

	for (int i = 1; i <= n; i++) {
		if (dist[i] == INF) cout << "INF\n";
		else cout << dist[i] << '\n';
	}

	return 0;
}