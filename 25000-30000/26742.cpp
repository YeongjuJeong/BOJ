// 26742 Skarpetki

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int a = 0, b = 0;
    for (auto c : s) {
        if (c == 'B') a++;
        else b++;
    }
    cout << (a / 2 + b / 2);
    
    return 0;
}
