#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, r, e, c;
	cin >> t;
	while (t--) {
		cin >> r >> e >> c;
		if (r == e - c) cout << "does not matter\n";
		else if (r < e - c) cout << "advertise\n";
		else cout << "do not advertise\n";
	}

	return 0;
}