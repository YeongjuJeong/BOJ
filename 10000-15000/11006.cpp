#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << 2 * m - n << ' ' << n - m << '\n';
	}

	return 0;
}