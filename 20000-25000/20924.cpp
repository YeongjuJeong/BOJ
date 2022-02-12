#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int n, r, h = 0, ans = 0;

vector<pair<int, int>> v[200002];
int visit[200002];

void FindGigaNode() {
	queue<int> q;
	q.push(r);
	visit[r] = 0;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if ((cur == r && v[cur].size() == 2) || v[cur].size() > 2
			|| (cur != r && v[cur].size() == 1)) {
			r = cur;
			return;
		}
		
		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i].first;
			if (visit[next] == -1) {
				visit[next] = 0;
				h += v[cur][i].second;
				q.push(next);
			}
		}
	}
}

void FindMaxNode() {
	queue<int> q;
	q.push(r);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (v[cur].size() == 1) {
			ans = max(ans, visit[cur]);
			continue;
		}

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i].first;
			if (visit[next] == -1) {
				visit[next] = visit[cur] + v[cur][i].second;
				q.push(next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> r;

	for (int i = 0, a, b, d; i < n - 1; i++) {
		cin >> a >> b >> d;
		v[a].push_back({ b, d });
		v[b].push_back({ a, d });
	}

	memset(visit, -1, sizeof(visit));
	
	FindGigaNode();
	FindMaxNode();

	cout << h << ' ' << ans << '\n';
	
	return 0;
}