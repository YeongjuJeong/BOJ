// 24196 Gömda ord

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s; cin >> s;
    string ans = "";
    int len = s.length();
    int i = 0;
    while (1) {
        ans += s[i];
        i += s[i] - 'A' + 1;
        if (i >= len) break;
    }
    cout << ans;

    return 0;
}
