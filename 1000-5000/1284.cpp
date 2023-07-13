// 1284 집 주소

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string s;
    while (1) {
        cin >> s;
        if (!s.compare("0")) break;
        int sum = 2;
        for (auto c: s){
            if (c == '1') sum += 2;
            else if (c == '0') sum += 4;
            else sum += 3;
        }
        sum += s.length() - 1;
        cout << sum << '\n';
    }
    
    return 0;
}
