#include <iostream>
using namespace std;

int n, in[100002], post[100002];

void cl(int l1, int r1, int l2, int r2) {
	if (l1 > r1 || l2 > r2) return;
	int root = post[r2];
	cout << root << ' ';
	int idx = -1;
	while (in[++idx] != root) {}
	cl(l1, idx - 1, l2, l2 + idx - l1 - 1);
	cl(idx + 1, r1, l2 + idx - l1, r2 - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) cin >> in[i];
	for (int i = 0; i < n; i++) cin >> post[i];

	cl(0, n - 1, 0, n - 1);

	cout << '\n';

	return 0;
}