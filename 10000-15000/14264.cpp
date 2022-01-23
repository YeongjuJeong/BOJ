#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	double l; cin >> l;

	cout << fixed << setprecision(10) << l * l * sqrt(3) / 4 << '\n';

	return 0;
}