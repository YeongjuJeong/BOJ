#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[11][11];
	int a, b, ans = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> arr[i][j];
			if (ans < arr[i][j]) {
				ans = arr[i][j];
				a = i; b = j;
			}
		}
	}

	cout << ans << '\n' << a << ' ' << b << '\n';

	return 0;
}