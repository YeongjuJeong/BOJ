#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	cout << (a + b - 1) % 12 + 1 << '\n';
	return 0;
}