// 10868 최솟값

#include <iostream>
#include <cmath>
// 각각의 정수들은 1 이상 1e9 이하
#define MAX 1e9 + 1
using namespace std;

long long* tree;
long long arr[100001]; // 1 <= n <= 100,000

int init(int node, int s, int e) {
	if (s == e) return tree[node] = arr[s];
	int m = (s + e) / 2;
	return tree[node] = min(init(node * 2, s, m), init(node * 2 + 1, m + 1, e));
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

	int n, m; cin >> n >> m;
	int height = (int)ceil(log2(n));
	tree = new long long[1 << (height + 1)];

	for (int i = 0; i < n; i++) cin >> arr[i];
	init(1, 0, n - 1);

	for (int i = 0, a, b; i < m; i++) {
		cin >> a >> b;
		cout << minof(1, 0, n - 1, a - 1, b - 1) << '\n';
	}

	return 0;
}