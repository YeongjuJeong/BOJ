#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int one = 0, two = 0;
	for (int i = 0, x; i < 3; i++) {
		cin >> x;
		if (x == 1) one++;
		else two++;
	}

	cout << (one > two ? 1 : 2) << '\n';

	return 0;
}