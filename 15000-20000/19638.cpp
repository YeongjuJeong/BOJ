#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue<int> pq;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, h, t;
	cin >> n >> h >> t;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		pq.push(x);
	}

	for (int i = 0; i < t; i++) {
		int cur = pq.top();
		pq.pop();

		if (cur < h) {
			cout << "YES\n" << i << '\n';
			return 0;
		}

		pq.push(max(1, cur / 2));
	}

	if (pq.top() < h) cout << "YES\n" << t << '\n';
	else cout << "NO\n" << pq.top() << '\n';
	
	return 0;
}