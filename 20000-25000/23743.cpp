#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, sum = 0;
vector<pair<int, pair<int, int>>> v;
int parent[2000001];

int find(int x) {
	if (x == parent[x]) return x;
	// 이 부분을 x = find(parent[x])라고 쓰는 실수를 했음..
	return parent[x] = find(parent[x]);
}

void Union(int x, int y) {
	x = find(x); y = find(y);
	if (x != y) parent[y] = x;
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 0; i <= n; i++) parent[i] = i;

	for (int i = 0, a, b, c; i < m; i++) {
		cin >> a >> b >> c;
		v.push_back({ c, {a, b} });
	}

	for (int i = 1, t; i <= n; i++) {
		cin >> t;
		v.push_back({ t, {0, i} });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		if (find(v[i].second.first) != find(v[i].second.second)) {
			Union(v[i].second.first, v[i].second.second);
			sum += v[i].first;
		}
	}

	cout << sum << '\n';

	return 0;
}