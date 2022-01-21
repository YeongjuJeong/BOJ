#include <iostream>
using namespace std;

int main() {
	int sum = 0, m = 101;
	for (int i = 0, x; i < 3; i++) {
		cin >> x;
		sum += x;
		m = min(m, x);
	}

	cout << sum - m << '\n';

	return 0;
}