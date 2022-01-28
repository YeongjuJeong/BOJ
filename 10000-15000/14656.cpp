#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, cnt = 0; cin >> n;

	for (int i = 1, k; i <= n; i++) {
		cin >> k;
		if (i != k) cnt++;
	}
	cout << cnt << '\n';

	return 0;
}