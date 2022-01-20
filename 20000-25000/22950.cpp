#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	string s;
	cin >> n >> s >> k;

	int mark = 0;
	for (int i = 0; i < min(k, (int)s.size()); i++) {
		if (s[s.size() - 1 - i] == '1') mark = 1;
	}

	if (mark) cout << "NO\n";
	else cout << "YES\n";

	return 0;
}