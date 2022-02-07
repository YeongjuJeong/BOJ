#include <iostream>
#include <set>
using namespace std;

string s[100];

bool f(string str) {
    int size = str.size();
    for (int i = 0; i < size / 2; i++) {
        if (str[i] != str[size - 1 - i]) return false;
    }
    return true;
}

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, k; cin >> t;
    while (t--) {
        string ans = "";
        cin >> k;
        for (int i = 0; i < k; i++) cin >> s[i];
        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k; j++) {
                if (f(s[i] + s[j])) {
                    ans = s[i] + s[j];
                    break;
                }
                if (f(s[j] + s[i])) {
                    ans = s[j] + s[i];
                    break;
                }
            }
            if (ans != "") break;
        }
        if (ans == "") cout << "0\n";
        else cout << ans << '\n';
    }

    return 0;
}