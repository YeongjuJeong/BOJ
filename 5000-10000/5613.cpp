#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num, ans = 0;
	char c = ' ';
	while (1) {
		cin >> num;
		if (c == ' ') ans = num;
		else if (c == '+') ans += num;
		else if (c == '-') ans -= num;
		else if (c == '*') ans *= num;
		else if (c == '/') ans /= num;
		cin >> c;
		if (c == '=') break;
	}

	cout << ans << '\n';

	return 0;
}