#include <iostream>
using namespace std;

int preorder[1001], inorder[1001];

void postorder(int st, int en, int root) {
	for (int i = st; i < en; i++) {
		if (inorder[i] == preorder[root]) {
			postorder(st, i, root + 1);
			postorder(i + 1, en, root + 1 + i - st);
			cout << preorder[root] << ' ';
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) cin >> preorder[i];
		for (int i = 0; i < n; i++) cin >> inorder[i];
		postorder(0, n, 0);
		cout << '\n';
	}

	return 0;
}