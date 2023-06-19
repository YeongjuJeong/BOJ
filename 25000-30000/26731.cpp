// 26731 Zagubiona litera

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; int a[26] = {0};
    cin >> s;
    for (auto c: s) {a[c - 'A'] = 1;}
    for (int i = 0; i < 26; i++) {
        if (!a[i]) cout << (char)('A' + i);
    }
    
    return 0;
}
