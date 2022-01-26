#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, a = 0, b = 0; cin >> n;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		a += 10 + (x / 30) * 10;
		b += 15 + (x / 60) * 15;
	}

	if (a > b) cout << "M " << b << '\n';
	else if (a < b) cout << "Y " << a << '\n';
	else cout << "Y M " << a << '\n';
	

	return 0;
}