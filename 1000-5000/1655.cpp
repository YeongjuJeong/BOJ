#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

priority_queue<int> a;
priority_queue<int, vector<int>, greater<int>> b;
vector<int> ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, cnt = 0;
	cin >> n;

	for (int i = 0, x; i < n; i++) {
		cin >> x;

		if (cnt % 2) {
			if (a.empty()) b.push(x);
			else if (a.top() > x) {
				b.push(a.top());
				a.pop();
				a.push(x);
			}
			else b.push(x);
			
		}
		else {
			if (b.empty()) a.push(x);
			else if (b.top() < x) {
				a.push(b.top());
				b.pop();
				b.push(x);
			}
			else a.push(x);
		}
		
		ans.push_back(a.top());
		cnt++;
	}

	for (int i : ans) cout << i << '\n';

	return 0;
}