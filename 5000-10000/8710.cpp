#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int k, w, m, ans;
	cin >> k >> w >> m;

	ans = (w - k) / m;
	if ((w - k) % m) ans++;

	cout << ans << '\n';

	return 0;
}