#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#define INF 1000000001
using namespace std;

priority_queue<pair<int, int>> pq;
vector<pair<int, int>> v[1001];
int n, m, st, en, dist[1001], parent[1001];

void dijkstra() {
	fill(dist, dist + n + 1, INF);

	pq.push({ 0, st });
	dist[st] = 0;

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
				parent[next] = cur;
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
	}

	cin >> st >> en;

	dijkstra();

	cout << dist[en] << '\n';

	stack<int> s;

	int cur = en;
	while (cur) {
		s.push(cur);
		cur = parent[cur];
	}

	cout << s.size() << '\n';

	while (!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}

	cout << '\n';

	return 0;
}