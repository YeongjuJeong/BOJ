#include <iostream>
using namespace std;

string arr[21];

int main() {
	int n, d = 1; cin >> n;
	string str; cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (d == 1) {
			arr[i % n] += str[i];
			if (i % n == n - 1) d = -1;
		}
		else {
			arr[n - i % n - 1] += str[i];
			if (i % n == n - 1) d = 1;
		}
	}

	for (int i = 0; i < n; i++) cout << arr[i];
	cout << '\n';

	return 0;
}