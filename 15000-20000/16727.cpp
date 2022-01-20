#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a + d == b + c) {
		if (b > d) cout << "Esteghlal\n";
		else if (b < d) cout << "Persepolis\n";
		else cout << "Penalty\n";
	}
	else if (a + d < b + c) cout << "Esteghlal\n";
	else cout << "Persepolis\n";

	return 0;
}