#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a * 7 == b * 13) cout << "lika\n";
	else if (a * 7 > b * 13) cout << "Axel\n";
	else cout << "Petra\n";

	return 0;
}