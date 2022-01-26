#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; getline(cin, s);
	for (int i = 0; i < s.size() - 1; i++) {
		if (s.substr(i, 2) == "D2" || s.substr(i, 2) == "d2") {
			cout << "D2\n";
			return 0;
		}
	}
	cout << "unrated\n";
	return 0;
}