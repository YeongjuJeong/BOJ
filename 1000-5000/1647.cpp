#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
	int a;
	int b;
	int dist;
	Edge(int a, int b, int dist) {
		this->a = a;
		this->b = b;
		this->dist = dist;
	}
	bool operator <(Edge& edge) {
		return this->dist < edge.dist;
	}
};

vector<Edge> v;
int root[100000];
int n, m;

int Find(int x) {
	if (root[x] == x) return x;
	return Find(root[x]);
}

void Union(int x, int y) {
	x = Find(x);
	y = Find(y);
	if (x < y) root[y] = x;
	else root[x] = y;
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 0, a, b, c; i < m; i++) {
		cin >> a >> b >> c;
		v.push_back(Edge(a - 1, b - 1, c));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) root[i] = i;

	int sum = 0, last = 0;
	for (int i = 0; i < v.size(); i++) {
		if (Find(v[i].a) != Find(v[i].b)) {
			sum += v[i].dist;
			last = v[i].dist;
			Union(v[i].a, v[i].b);
		}
	}

	cout << sum - last << '\n';

	return 0;
}