#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	switch (n) {
	case 1996: case 1997: case 2000: case 2007: case 2008: case 2013: case 2018: cout << "SPbSU\n"; break;
	case 2006:cout << "PetrSU, ITMO\n"; break;
	default: cout << "ITMO\n";
	}

	return 0;
}