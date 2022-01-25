#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	char c;
	string s = "";
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == 'J' || c == 'A' || c == 'V') continue;
		s.push_back(c);
	}

	if (s.size()) cout << s << '\n';
	else cout << "nojava\n";

	return 0;
}