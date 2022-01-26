#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m, k;
	cin >> n >> m >> k;

	int a = min(m, k);
	int b = min(n - m, n - k);
	cout << a + b << '\n';

	return 0;
}