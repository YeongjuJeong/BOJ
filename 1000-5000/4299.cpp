#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	if (n % 2) cout << "CY\n";
	else cout << "SK\n";

	return 0;
}