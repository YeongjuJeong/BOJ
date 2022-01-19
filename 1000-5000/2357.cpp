// 2357 최솟값과 최대값

#include <iostream>
#include <cmath>
// 각각의 정수들은 1 이상 1e9 이하
#define MAX 1e9 + 1
#define MIN 0
using namespace std;

long long* mintree;
long long* maxtree;
long long arr[100001]; // 1 <= n <= 100,000

int init_min(int node, int s, int e) {
	if (s == e) return mintree[node] = arr[s];
	int m = (s + e) / 2;
	return mintree[node] = min(init_min(node * 2, s, m), init_min(node * 2 + 1, m + 1, e));
}

int init_max(int node, int s, int e) {
	if (s == e) return maxtree[node] = arr[s];
	int m = (s + e) / 2;
	return maxtree[node] = max(init_max(node * 2, s, m), init_max(node * 2 + 1, m + 1, e));
}

int minof(int node, int s, int e, int l, int r) {
	if (e < l || r < s) return MAX;
	if (l <= s && e <= r) return mintree[node];
	int m = (s + e) / 2;
	return min(minof(node * 2, s, m, l, r), minof(node * 2 + 1, m + 1, e, l, r));
}

int maxof(int node, int s, int e, int l, int r) {
	if (e < l || r < s) return MIN;
	if (l <= s && e <= r) return maxtree[node];
	int m = (s + e) / 2;
	return max(maxof(node * 2, s, m, l, r), maxof(node * 2 + 1, m + 1, e, l, r));
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;
	int height = (int)ceil(log2(n));
	mintree = new long long[1 << (height + 1)];
	maxtree = new long long[1 << (height + 1)];

	for (int i = 0; i < n; i++) cin >> arr[i];

	init_min(1, 0, n - 1);
	init_max(1, 0, n - 1);

	for (int i = 0, a, b; i < m; i++) {
		cin >> a >> b;
		cout << minof(1, 0, n - 1, a - 1, b - 1) << ' '
			<< maxof(1, 0, n - 1, a - 1, b - 1) << '\n';
	}

	return 0;
}