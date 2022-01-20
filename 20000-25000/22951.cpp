#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;

deque<pair<int, int>> d;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 0, x; j < k; j++) {
			cin >> x;
			d.push_back({ x, i });
		}
	}

	while (d.size() > 1) {
		int p = d.front().first;
		d.pop_front();
		for (int i = 1; i < p; i++) {
			d.push_back(d.front());
			d.pop_front();
		}
	}

	cout << d.front().second << ' ' << d.front().first << '\n';

	return 0;
}