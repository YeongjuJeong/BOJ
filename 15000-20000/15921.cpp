#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, sum = 0; cin >> n;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		sum += x;
	}
	if (sum) cout << "1.00\n";
	else cout << "divide by zero\n";

	return 0;
}