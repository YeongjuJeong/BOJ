#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string s;
    cin >> s;
    if (s.size() == 4) cout << "20\n";
    else if (s.size() == 3) {
        if (s[0] == '1' && s[1] == '0') cout << 10 + s[2] - '0' << '\n';
        else cout << s[0] - '0' + 10 << '\n';
    }
    else cout << s[0] - '0' + s[1] - '0' << '\n';
    
    return 0;
}