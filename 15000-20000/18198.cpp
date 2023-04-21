// 18198 Basketball One-on-One

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string s; cin >> s;
    int len = s.length();
    int a = 0, b = 0;
    for (int i = 0; i < len; i += 2){
        if (s[i] == 'A') a += s[i + 1] - '0';
        else b += s[i + 1] - '0';
    }
    cout << (a > b ? "A" : "B");
    
    return 0;
}
