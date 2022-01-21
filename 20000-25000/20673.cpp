#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a <= 50 && b <= 10) cout << "White\n";
	else if (b > 30) cout << "Red\n";
	else cout << "Yellow\n";

	return 0;
}