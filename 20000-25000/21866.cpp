#include <iostream>
using namespace std;

int main() {
	int arr[9] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	int sum = 0, hacker = 0;

	for (int i = 0, x; i < 9; i++) {
		cin >> x;
		sum += x;
		if (x > arr[i]) hacker = 1;
	}

	if (hacker) cout << "hacker\n";
	else if (sum >= 100) cout << "draw\n";
	else cout << "none\n";

	return 0;
}