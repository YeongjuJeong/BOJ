#include <iostream>
#include <vector>
using namespace std;

vector<char> aeiou = { 'a', 'e', 'i', 'o', 'u' };

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    while (1) {
        cin >> s;
        if (s == "end") break;
        int n = s.size();

        int mark = 0, check = 0, cnt1 = 0, cnt2 = 0, fail = 0;
        for (int i = 0; i < n; i++) {
            mark = 0;
            for (int j = 0; j < 5; j++) {
                if (s[i] == aeiou[j]) {
                    mark = 1, check = 1; cnt1++; cnt2 = 0;
                    if (cnt1 >= 3) fail = 1;
                }
            }
            if (!mark) {
                mark = 0; cnt1 = 0; cnt2++;
                if (cnt2 >= 3) fail = 1;
            } // 자음
            if (i < n - 1 && s[i] != 'e' && s[i] != 'o' && s[i] == s[i + 1]) { fail = 1; break; }
            if (i < n - 2 && (s.substr(i, 3) == "eee" || s.substr(i, 3) == "ooo")) { fail = 1; break; }
        }

        cout << "<" << s << "> ";
        if (!check || fail) cout << "is not acceptable.\n";
        else cout << "is acceptable.\n";
    }

    return 0;
}
