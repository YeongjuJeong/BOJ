#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.14159265358979
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	double n; cin >> n;
	n /= pi;
	n = sqrt(n);

	cout << fixed << setprecision(10) << n * 2 * pi << '\n';

	return 0;
}