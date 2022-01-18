#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) cout << a << '+' << b << '=' << c << '\n';
	else if (a - b == c) cout << a << '-' << b << '=' << c << '\n';
	else if (a * b == c) cout << a << '*' << b << '=' << c << '\n';
	else if (a / b == c && a % b == 0) cout << a << '/' << b << '=' << c << '\n';
	else if (a == b + c) cout << a << '=' << b << '+' << c << '\n';
	else if (a == b - c) cout << a << '=' << b << '-' << c << '\n';
	else if (a == b * c) cout << a << '=' << b << '*' << c << '\n';
	else cout << a << '=' << b << '/' << c << '\n';

	return 0;
}