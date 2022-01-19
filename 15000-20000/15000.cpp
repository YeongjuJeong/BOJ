// 15000 CAPS

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str; cin >> str;

	for (auto c : str) cout << (char)(c - 'a' + 'A');
	cout << '\n';
	
	return 0;
}