#include <iostream>
#include <map>
#define MAX 1000000007
using namespace std;

map<int, int> m;

long long calc(long long n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	long long a, b;

	if (n % 2) {
		if (m.find((n + 1) / 2) == m.end()) a = calc((n + 1) / 2) % MAX;
		else a = m[(n + 1) / 2];
		if (m.find((n + 1) / 2 - 1) == m.end()) b = calc((n + 1) / 2 - 1) % MAX;
		else b = m[(n + 1) / 2 - 1];
		return m[n] = ((a * a % MAX) + (b * b % MAX)) % MAX;
	}
	else {
		if (m.find(n / 2) == m.end()) a = calc(n / 2) % MAX;
		else a = m[n / 2];
		if (m.find(n / 2 - 1) == m.end()) b = calc(n / 2 - 1) % MAX;
		else b = m[n / 2 - 1];
		return m[n] = ((a + (2 * b % MAX)) % MAX) * a % MAX;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;
	cin >> n;

	cout << calc(n) << '\n';

	return 0;
}