#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	cout << (n == 1 ? 1: n * 2 - 2) << '\n';
	for (int i = 1; i <= n; i++) cout << 1 << ' ' << i << '\n';
	for (int i = 2; i <= n - 1; i++) cout << n << ' ' << i << '\n';

	return 0;
}