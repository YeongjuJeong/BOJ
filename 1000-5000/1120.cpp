#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string a, b;
	cin >> a >> b;
	int as = a.size(), bs = b.size(),
		ans = 100;

	for (int i = 0; i <= bs - as; i++) {
		int gap = 0;
		for (int j = 0; j < as; j++)
			if (a[j] != b[i + j]) gap++;
		ans = min(ans, gap);
	}

	cout << ans << '\n';

	return 0;
}