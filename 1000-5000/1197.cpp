// 1197 최소 스패닝 트리 (G1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int vertex, edge, sum = 0;
vector<pair<int, pair<int, int>>> v;
int parent[100001];

int find(int x) {
	if (x == parent[x]) return x;
	return x = find(parent[x]);
}

void Union(int x, int y) {
	x = find(x); y = find(y);
	if (x != y) parent[y] = x;
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> vertex >> edge;
	for (int i = 0, a, b, c; i < edge; i++) {
		cin >> a >> b >> c;
		v.push_back({ c, {a, b} });
	}

	for (int i = 1; i <= vertex; i++) parent[i] = i;

	sort(v.begin(), v.end());

	for (int i = 0; i < edge; i++) {
		if (find(v[i].second.first) != find(v[i].second.second)) {
			Union(v[i].second.first, v[i].second.second);
			sum += v[i].first;
		}
	}
	cout << sum << '\n';
    
	return 0;
}