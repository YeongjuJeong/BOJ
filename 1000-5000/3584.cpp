#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int parent[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, n, f, s, ans;
	cin >> t;

	while (t--) {
		memset(parent, 0, sizeof(parent));
		cin >> n;
		for (int i = 0, a, b; i < n - 1; i++) {
			cin >> a >> b;
			parent[b] = a;
		}
		cin >> f >> s;
		stack<int> st1, st2;
		while (f) {
			st1.push(f);
			f = parent[f];
		}

		while (s) {
			st2.push(s);
			s = parent[s];
		}

		while (!st1.empty() && !st2.empty() && st1.top() == st2.top()) {
			ans = st1.top();
			st1.pop(); st2.pop();
		}

		cout << ans << '\n';
	}
	
	return 0;
}