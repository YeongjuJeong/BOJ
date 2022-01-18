#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1600000001 // 4 * 4000(n) * 100000(c)
using namespace std;

int n, m;
long long dist1[4001], dist2[2][4001];

vector<pair<long long, int>> v[4001];

void dijkstra1() {
	priority_queue<pair<long long, int>> pq;
	fill(dist1, dist1 + n + 1, INF);

	pq.push({ 0, 1 });
	dist1[1] = 0;

	while (!pq.empty()) {
		long long cc = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (cc > dist1[cur]) continue;

		for (int i = 0; i < v[cur].size(); i++) {
			long long nc = cc + 2 * v[cur][i].first;
			int next = v[cur][i].second;

			if (nc < dist1[next]) {
				dist1[next] = nc;
				pq.push({ -nc, next });
			}
		}
	}
}

void dijkstra2() {
	priority_queue<pair<pair<long long, int>, int>> pq;
	fill(dist2[0], dist2[0] + n + 1, INF);
	fill(dist2[1], dist2[1] + n + 1, INF);

	pq.push({ { 0, 1 }, 0 });
	dist2[0][1] = 0;

	while (!pq.empty()) {
		long long cc = -pq.top().first.first;
		int cur = pq.top().first.second;
		int tmp = pq.top().second;
		pq.pop();

		if (cc > dist2[tmp][cur]) continue;

		for (int i = 0; i < v[cur].size(); i++) {
			long long nc = cc + (tmp ? 4 : 1) * v[cur][i].first;
			int next = v[cur][i].second;

			if (nc < dist2[tmp ? 0 : 1][next]) {
				dist2[tmp ? 0 : 1][next] = nc;
				pq.push({ { -nc, next }, tmp ? 0 : 1 });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0, a, b, c; i < m; i++) {
		cin >> a >> b >> c;
		v[a].push_back({ c, b });
		v[b].push_back({ c, a });
	}

	dijkstra1(); dijkstra2();

	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		if (dist1[i] != INF && dist1[i] < min(dist2[0][i], dist2[1][i]))
			cnt++;
	}

	cout << cnt << '\n';

	return 0;
}