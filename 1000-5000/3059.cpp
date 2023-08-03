// 3059 등장하지 않는 문자의 합

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t; string s;
    cin >> t;
    while (t--) {
        int alpha[26] = {0};
        int sum = 0;
        cin >> s;
        for (auto c: s) alpha[c - 'A']++;
        for (int i = 0; i < 26; i++) {
            if (!alpha[i]) sum += 65 + i;
        }
        cout << sum << '\n';
    }
    
    return 0;
}
