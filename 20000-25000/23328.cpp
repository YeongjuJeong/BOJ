#include <iostream>
#include <algorithm>
using namespace std;

int n, cnt = 0;
char bomb, shield;
string s, bombstr, shieldstr, a, b, d, e;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    cin >> n >> bomb >> s;
    shield = bomb - 'A' + 'a';

    sort(s.begin(), s.end());

    for (auto c : s) {
        if (c == bomb) bombstr.push_back(c);
        else if (c == shield) shieldstr.push_back(c);
        else if ('A' <= c && c <= 'Z' && c < bomb) a.push_back(c);
        else if ('A' <= c && c <= 'Z' && bomb < c) b.push_back(c);
        else if ('a' <= c && c <= 'z' && c < shield) d.push_back(c);
        else e.push_back(c);
    }

    if (shieldstr.length() == 0) {
        if (a.length() == 0) cout << bombstr + b + d + e << '\n';
        else cout << a + b + d + e + bombstr << '\n';
    }
    else if (shieldstr.length() == 1) {
        if (a.length() == 0) cout << bombstr + shieldstr + b + d + e << '\n';
        else cout << a + b + d + e + shieldstr + bombstr << '\n';
    }
    else { // shieldstr.length() > 2
        if (a.length() == 0) {
            shieldstr.pop_back();
            cout << bombstr + shield + b + d + shieldstr + e << '\n';
        }
        else {
            shieldstr.pop_back();
            cout << a + b + d + shield + bombstr + shieldstr + e << '\n';
        }
    }

    return 0;
}
