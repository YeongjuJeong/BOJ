#include <iostream>
#include <map>
using namespace std;

int alpha[26];

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	char c;
	while ((c = getchar()) != EOF) {
		if ('a' <= c && c <= 'z') alpha[c - 'a']++;
	}

	int m = 0;
	for (int i = 0; i < 26; i++) m = max(m, alpha[i]);
	for (int i = 0; i < 26; i++)
		if (m == alpha[i]) cout << (char)('a' + i);
	cout << '\n';

	return 0;
}