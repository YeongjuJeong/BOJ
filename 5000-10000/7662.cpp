#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, k, n;
	char c;

	cin >> t;

	while (t--) {
		multiset<int> s;
		cin >> k;
		while (k--) {
			cin >> c >> n;

			if (c == 'I') s.insert(n);
			else { // c == 'D'
				if (s.empty()) continue;

				if (n == 1) s.erase(--s.end());
				else s.erase(s.begin());
			}
		}
		if (s.empty()) cout << "EMPTY" << '\n';
		else cout << *(--s.end()) << ' ' << *s.begin() << '\n';
	}

	return 0;
}