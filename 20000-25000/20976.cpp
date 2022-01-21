#include <iostream>
using namespace std;

int main() {
	int sum = 0, a = 101, b = 0;
	for (int i = 0, x; i < 3; i++) {
		cin >> x;
		sum += x;
		a = min(a, x);
		b = max(b, x);
	}

	cout << sum - a - b << '\n';

	return 0;
}