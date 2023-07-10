// 28074 모비스

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int m = 0, o = 0, b = 0, i = 0, s = 0;
    string st; cin >> st;
    for (auto c: st){
        if (c == 'M') m++;
        else if (c == 'O') o++;
        else if (c == 'B') b++;
        else if (c == 'I') i++;
        else if (c == 'S') s++;
    }
    if (m && o && b && i && s) cout << "YES";
    else cout << "NO";

    return 0;
}
