// 9009 피보나치

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define MAX 1000000001
using namespace std;

vector<int> v;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;

	v.push_back(0);
	v.push_back(1);
	int i = 2;
	while (1) {
		v.push_back(v[i - 2] + v[i - 1]);
		if (v[i++] > MAX) break;
	}

	int size = v.size();
	while (t--) {
		int n; cin >> n;
		stack<int> s;
		for (int i = size - 1; i > 0; i--) {
			if (n >= v[i]) {
				n -= v[i];
				s.push(v[i]);
			}
		}
		while (!s.empty()) {
			cout << s.top() << ' ';
			s.pop();
		}
		cout << '\n';
	}

	return 0;
}