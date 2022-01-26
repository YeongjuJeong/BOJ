#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 10000000001 // 100000(n) * 100000(t) = 10000000000
using namespace std;

long long n, m;
long long ward[100001], dist[100001];

priority_queue<pair<long long, long long>> pq;
vector<pair<long long, long long>> v[100001];

void dijkstra() {
	fill(dist, dist + n, INF);
	pq.push({ 0, 0 });

	while (!pq.empty()) {
		long long cc = -pq.top().first;
		long long cur = pq.top().second;
		pq.pop();

		if (cc > dist[cur]) continue;

		for (int i = 0; i < v[cur].size(); i++) {
			long long nc = v[cur][i].first + cc;
			long long next = v[cur][i].second;

			if (!ward[next] && nc < dist[next]) {
				dist[next] = nc;
				pq.push({ -nc, next });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) cin >> ward[i];
	ward[n - 1] = 0;

	for (int i = 0, a, b, t; i < m; i++) {
		cin >> a >> b >> t;
		// 양방향
		v[a].push_back({ t, b });
		v[b].push_back({ t, a });
	}

	dijkstra();

	if (dist[n - 1] == INF) cout << "-1\n";
	else cout << dist[n - 1] << '\n';

	return 0;
}