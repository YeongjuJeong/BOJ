#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s; cin >> s;

    int tmp = 0, zero = 0;
    for (int idx = s.size() - 1; idx > 0; idx--) {
        int i = s[idx] - '0';
        
        if (i + tmp >= 5) tmp = 1;
        else tmp = 0;
    }

    if (s[0] - '0' + tmp > 9) cout << "10";
    else cout << s[0] - '0' + tmp;

    for (int i = 0; i < s.size() - 1; i++) cout << "0";
    cout << '\n';

    return 0;
}