// 10868 최솟값

#include <iostream>
#include <cmath>
// 1 <= Ai <= 1e9
#define MAX 1e9 + 1
using namespace std;

long long* tree;
long long arr[100001]; // 1 <= n <= 100,000

int init(int node, int s, int e) {
	if (s == e) return tree[node] = arr[s];
	int m = (s + e) / 2;
	return tree[node] = min(init(node * 2, s, m), init(node * 2 + 1, m + 1, e));
}

int update(int node, int s, int e, int idx, int dif) {
	if (idx < s || idx > e || s == e) { // idx < s || idx > e 부분이 없으면 시간 초과!
		if (s == idx) tree[node] = dif;
		return tree[node];
	}
	int m = (s + e) / 2;
	return tree[node] = min(update(node * 2, s, m, idx, dif), update(node * 2 + 1, m + 1, e, idx, dif));
}

int minof(int node, int s, int e, int l, int r) {
	if (e < l || r < s) return MAX;
	if (l <= s && e <= r) return tree[node];
	int m = (s + e) / 2;
	return min(minof(node * 2, s, m, l, r), minof(node * 2 + 1, m + 1, e, l, r));
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n;
	int height = (int)ceil(log2(n));
	tree = new long long[1 << (height + 1)];

	for (int i = 0; i < n; i++) cin >> arr[i];
	init(1, 0, n - 1);

	cin >> m;
	for (int i = 0, a, b, c; i < m; i++) {
		cin >> a >> b >> c;
		if (a == 1) update(1, 0, n - 1, b - 1, c);
		else cout << minof(1, 0, n - 1, b - 1, c - 1) << '\n';
	}

	return 0;
}