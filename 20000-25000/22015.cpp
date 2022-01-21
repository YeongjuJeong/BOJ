#include <iostream>
using namespace std;

int main() {
	int sum = 0, m = 0;
	for (int i = 0, x; i < 3; i++) {
		cin >> x;
		sum += x;
		m = max(m, x);
	}

	cout << m * 3 - sum << '\n';

	return 0;
}