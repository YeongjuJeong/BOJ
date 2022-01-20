// 16975 수열과 쿼리 21
#include <iostream>
#define ll long long
#define MAX 100010 // 1 <= n <= 100000
using namespace std;

ll arr[MAX];

typedef struct Tree {
	ll value, lazy;
};

Tree tree[MAX * 3];

ll init(int node, int s, int e) {
	if (s == e) return tree[node].value = arr[s];
	return tree[node].value = init(node * 2, s, (s + e) / 2) + init(node * 2 + 1, (s + e) / 2 + 1, e);
}

void update(int node, int s, int e, int l, int r, ll dif) {
	if (tree[node].lazy != 0) {
		tree[node].value += (e - s + 1) * tree[node].lazy;
		if (s != e) {
			tree[node * 2].lazy += tree[node].lazy;
			tree[node * 2 + 1].lazy += tree[node].lazy;
		}
		tree[node].lazy = 0;
	}

	if (r < s || e < l) return;

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

void find(int node, int s, int e, int idx) {
	if (tree[node].lazy != 0) {
		tree[node].value += (e - s + 1) * tree[node].lazy;
		if (s != e) {
			tree[node * 2].lazy += tree[node].lazy;
			tree[node * 2 + 1].lazy += tree[node].lazy;
		}
		tree[node].lazy = 0;
	}

	if (idx < s || e < idx) return;

	if (s == e && s == idx) {
		cout << tree[node].value << '\n';
		return;
	}

	find(node * 2, s, (s + e) / 2, idx);
	find(node * 2 + 1, (s + e) / 2 + 1, e, idx);
}


int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	init(1, 1, n);
	cin >> m;
	for (int i = 1, x, a, b, c; i <= m; i++) {
		cin >> x;
		if (x == 1) {
			cin >> a >> b >> c;
			update(1, 1, n, a, b, c);
		}
		else {
			cin >> a;
			find(1, 1, n, a);
		}
	}

	return 0;
}