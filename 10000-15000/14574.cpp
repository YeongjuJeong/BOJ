#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;

struct edge {
	int u, v, c;
	edge(int u, int v, int c) {
		this->u = u;
		this->v = v;
		this->c = c;
	}
	bool operator <(edge& e) {
		return this->c > e.c;
	}
};

vector<pair<int, int>> info;
vector<int> ans[1001];
int visit[1001];
vector<edge> Edge;

int parent[1001], height[1001];

int Find(int u) { // 대장 노드 찾기
	if (parent[u] == -1) return u;
	return parent[u] = Find(parent[u]);
}

bool Union(int u, int v) { // u 대장이랑 v 대장이랑 연결
	u = Find(u); v = Find(v);
	if (u == v) return false; // 싸이클이면 pass

	if (height[u] < height[v]) swap(u, v);
	parent[v] = u;

	if (height[u] == height[v]) height[u]++; 
	return true;
}

void dfs(int k, int p) {
	visit[k] = 1;
	for (int i = 0; i < ans[k].size(); i++) {
		if (!visit[ans[k][i]]) {
			visit[ans[k][i]] = 1;
			dfs(ans[k][i], k);
		}
	}
	if (p != -1) cout << p + 1 << ' ' << k + 1 << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0, a, b; i < n; i++) {
		cin >> a >> b;
		info.push_back({ a, b });
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int c = (info[i].second + info[j].second) / abs(info[i].first - info[j].first);
			Edge.push_back(edge(i, j, c));
		}
	}

	sort(Edge.begin(), Edge.end());

	memset(parent, -1, sizeof(parent));

	long long cnt = 0;
	for (edge& e : Edge) {
		int u = e.u, v = e.v, c = e.c;
		if (Union(u, v)) {
			cnt += c;
			ans[u].push_back(v);
			ans[v].push_back(u);
		}
	}

	cout << cnt << '\n';

	for (int i = 0; i < n; i++) {
		if (ans[i].size() == 1) {
			dfs(i, -1); break;
		}
	}

	return 0;
}