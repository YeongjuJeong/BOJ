#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> v = { '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
    'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
    'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
    'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/' };

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    while (getline(cin, s)) {
        if (cin.eof()) break;
        for (int i = 0; i < s.size(); i++) {
            int mark = 0;
            for (int j = 0; j < v.size(); j++) {
                if (s[i] == v[j]) {
                    mark = 1;
                    cout << v[j - 1];
                }
            }
            if (!mark) cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}
