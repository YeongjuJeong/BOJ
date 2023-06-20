// 26736 Wynik meczu

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int a = 0, b = 0;
    for (auto c: s) {
        if (c == 'A') a++;
        else if (c == 'B') b++;
    }
    
    cout << a << " : " << b;
    
    return 0;
}
