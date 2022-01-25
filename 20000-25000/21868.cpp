#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int e1, e2, a, b, x0;
	cin >> e1 >> e2 >> a >> b >> x0;

	cout << a * x0 + b << '\n';

	if (!e1 || !(a * e2)) cout << "0 0\n";
	else cout << abs(e1) << ' ' << abs(a * e2) << '\n';

	return 0;
}