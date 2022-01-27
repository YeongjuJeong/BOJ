#include <iostream>
using namespace std;

string str;

int akaraka(int start, int len) {
	if (len == 1) return 1;

	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) return 0;
	}

	return akaraka(start, len / 2) * akaraka(start + len / 2, len / 2);
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> str;
	if (akaraka(0, str.size())) cout << "AKARAKA\n";
	else cout << "IPSELENTI\n";

	return 0;
}