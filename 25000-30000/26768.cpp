// 26768 H4x0r

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    for (auto c : s){
        if (c == 'a') cout << "4";
        else if (c == 'e') cout << "3";
        else if (c == 'i') cout << "1";
        else if (c == 'o') cout << "0";
        else if (c == 's') cout << "5";
        else cout << c;
    }
    
    return 0;
}
