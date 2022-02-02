#include <iostream>
#include <vector>
using namespace std;

vector<char> v;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s; cin >> s;

    int cnt = 0;
    for (char c : s) {
        if (c == '.') {
            if (cnt == 0) {
                v.push_back('.');
                continue;
            }

            if (cnt % 2) {
                cout << "-1\n";
                return 0;
            }

            for (int i = 0; i < cnt / 4; i++) {
                for (int j = 0; j < 4; j++) v.push_back('A');
            }

            if (cnt % 4) {
                v.push_back('B');
                v.push_back('B');
            }

            v.push_back('.');

            cnt = 0;
        }

        else cnt++;
    }

    if (cnt) {
        if (cnt % 2) {
            cout << "-1\n";
            return 0;
        }

        for (int i = 0; i < cnt / 4; i++) {
            for (int j = 0; j < 4; j++) v.push_back('A');
        }

        if (cnt % 4) {
            v.push_back('B');
            v.push_back('B');
        }
    }

    for (char c : v) cout << c;
    cout << '\n';

    return 0;
}