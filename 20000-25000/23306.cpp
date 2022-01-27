#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, a, b; cin >> n;
	cout << "? 1" << endl; cin >> a;
	cout << "? " << n << endl; cin >> b;
	if (a < b) cout << "! 1" << endl;
	else if (a > b) cout << "! -1" << endl;
	else cout << "! 0" << endl;

	return 0;
}