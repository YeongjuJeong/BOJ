#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

struct edge {
	int u, v;
	int c;
	edge(int u, int v, int c) {
		this->u = u;
		this->v = v;
		this->c = c;
	}
	bool operator <(edge &e) {
		return this->c < e.c;
	}
};

vector<edge> v;

int parent[1001], height[1001];

int Find(int u) {
	if (parent[u] == -1) return u;
	return parent[u] = Find(parent[u]);
}

bool Union(int u, int v) {
	u = Find(u); v = Find(v);
	if (u == v) return false;

	if (height[u] < height[v]) swap(u, v);
	parent[v] = u;

	if (height[u] < height[v]) height[u]++;
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	for (int i = 0, a, b, c; i < m; i++) {
		cin >> a >> b >> c;
		v.push_back(edge(a, b, c));
	}

	sort(v.begin(), v.end());

	memset(parent, -1, sizeof(parent));

	int ans = 0;
	for (auto e : v) {
		int u = e.u, v = e.v, c = e.c;
		if (Union(u, v)) ans += c;
	}

	cout << ans << '\n';

	return 0;
}