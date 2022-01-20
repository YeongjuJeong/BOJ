#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, a = 0, b = 0;
	cin >> n;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		if (x) a++;
		else b++;
	}

	if (a > b) cout << "Junhee is cute!\n";
	else cout << "Junhee is not cute!\n";

	return 0;
}