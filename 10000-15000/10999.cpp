// 10999 구간 합 구하기 2

// 일반적인 세그먼트 트리를 생각하고 풀었더니 시간 초과가 났다.
// update 함수는 최악의 경우 트리의 모든 노드를 업데이트 해야하기 때문!!
// 느리게 갱신되는 세그먼트 트리 (Segment Tree with Lazy Propagation) 을 공부하고 다시 풀었다.

#include <iostream>
#define ll long long
#define MAX 1000010
using namespace std;

typedef struct Tree {
	ll value, lazy;
} Tree;

Tree tree[3 * MAX];
ll arr[MAX];

ll init(int node, int s, int e) {
	if (s == e) return tree[node].value = arr[s];
	return tree[node].value = init(node * 2, s, (s + e) / 2) + init(node * 2 + 1, (s + e) / 2 + 1, e);
}

void update(int node, int s, int e, int l, int r, ll dif) {
	// 바로 갱신하지 않고 이렇게 node를 방문했을 때에 업데이트 시켜줌!
	if (tree[node].lazy != 0) {
		tree[node].value += (e - s + 1) * tree[node].lazy;
		if (s != e) {
			tree[node * 2].lazy += tree[node].lazy;
			tree[node * 2 + 1].lazy += tree[node].lazy;
		}
		tree[node].lazy = 0;
	}

	if (e < l || r < s) return;

	if (l <= s && e <= r) {
		tree[node].value += (e - s + 1) * dif;
		if (s != e) {
			tree[node * 2].lazy += dif;
			tree[node * 2 + 1].lazy += dif;
		}
		return;
	}

	update(node * 2, s, (s + e) / 2, l, r, dif);
	update(node * 2 + 1, (s + e) / 2 + 1, e, l, r, dif);

	tree[node].value = tree[node * 2].value + tree[node * 2 + 1].value;
}

ll sum(int node, int s, int e, int l, int r) {
	if (tree[node].lazy != 0) {
		tree[node].value += (e - s + 1) * tree[node].lazy;
		if (s != e) {
			tree[node * 2].lazy += tree[node].lazy;
			tree[node * 2 + 1].lazy += tree[node].lazy;
		}
		tree[node].lazy = 0;
	}

	if (e < l || r < s) return 0;
	if (l <= s && e <= r) return tree[node].value;
	return sum(node * 2, s, (s + e) / 2, l, r) + sum(node * 2 + 1, (s + e) / 2 + 1, e, l, r);
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, k; cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) cin >> arr[i];
	init(1, 1, n);

	for (int i = 0, a, b, c; i < m + k; i++) {
		cin >> a >> b >> c;
		if (a == 1) {
			ll d;
			cin >> d;
			update(1, 1, n, b, c, d);
		}
		else cout << sum(1, 1, n, b, c) << '\n';
	}

	return 0;
}