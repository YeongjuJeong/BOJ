#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, n, m; cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0, a, b; i < m; i++)
			cin >> a >> b;
		cout << n - 1 << '\n';
	}
	
	return 0;
}