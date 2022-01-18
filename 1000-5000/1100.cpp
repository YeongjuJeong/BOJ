#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	char x; int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> x;
			if (i % 2 == j % 2 && x == 'F') cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}