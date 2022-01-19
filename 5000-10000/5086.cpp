#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) break;

		if (n > m && n % m == 0) cout << "multiple\n";
		else if (n < m && m % n == 0) cout << "factor\n";
		else cout << "neither\n";
	}

	return 0;
}