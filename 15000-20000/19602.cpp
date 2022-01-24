#include <iostream>
using namespace std;

int main() {
	int s, m, l, ans;
	cin >> s >> m >> l;

	ans = s + 2 * m + 3 * l;

	if (ans >= 10) cout << "happy\n";
	else cout << "sad\n";

	return 0;
}