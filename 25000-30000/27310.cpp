// 27310 :chino_shock:

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string s; cin >> s;
    int l, m = 0, n = 0;
    for (auto c: s) {
        if (c == ':') m++;
        else if (c == '_') n++;
    }
    cout << s.length() + m + n * 5;

    return 0;
}
