#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	if (!s.compare("A+")) cout << "4.3\n";
	else if (!s.compare("A0")) cout << "4.0\n";
	else if (!s.compare("A-")) cout << "3.7\n";
	else if (!s.compare("B+")) cout << "3.3\n";
	else if (!s.compare("B0")) cout << "3.0\n";
	else if (!s.compare("B-")) cout << "2.7\n";
	else if (!s.compare("C+")) cout << "2.3\n";
	else if (!s.compare("C0")) cout << "2.0\n";
	else if (!s.compare("C-")) cout << "1.7\n";
	else if (!s.compare("D+")) cout << "1.3\n";
	else if (!s.compare("D0")) cout << "1.0\n";
	else if (!s.compare("D-")) cout << "0.7\n";
	else cout << "0.0\n";

	return 0;
}