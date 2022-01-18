#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		long long sum = 0, tmp;
		for (int i = 1; i <= n; i++) {
			tmp = 0;
			for (int j = 1; j <= i + 1; j++) tmp += j;
			sum += i * tmp;
		}

		cout << sum << '\n';
	}

	return 0;
}