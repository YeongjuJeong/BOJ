#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++) cout << ' ';
	cout << '*' << '\n';
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - i; j++) cout << ' ';
		cout << '*';
		for (int j = 1; j < 2 * i; j++) cout << ' ';
		cout << '*' << '\n';
	}
	if (n > 1) {
		for (int i = 1; i < 2 * n; i++) cout << '*';
		cout << '\n';
	}

	return 0;
}