#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	char c = '.';
	int sum = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) sum += 5;
		else {
			c = s[i];
			sum += 10;
		}
	}

	cout << sum << '\n';

	return 0;
}