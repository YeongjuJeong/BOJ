#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int g, k, l, n, m;
	string s, t;
	cin >> g >> k >> l;
	while (g--) {
		cin >> n >> s >> m >> t;
		if (n == m || k == 1) cout << "YS\n";
		else if (n < m) cout << "Y\n";
		else cout << "S\n";
	}

	return 0;
}