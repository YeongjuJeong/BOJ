// 9047 6174
// 숫자를 튀기고 튀기는 문제
// 세 자리 수가 될 경우에 0 붙이는 걸 빠뜨려서 시간초과가 났다.
// 1000 을 생각해보면 됨.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        
        int cnt = 0;
        while (1){
            if (!s.compare("6174")) break;
            string big = s;
            sort(big.begin(), big.end(), greater<>());
            string small = big;
            reverse(small.begin(), small.end());
            s = to_string(stoi(big) - stoi(small));
            while (s.size() < 4) { s = '0' + s; }
            cnt++;
        }
        cout << cnt << '\n';
    }
    
    return 0;
}
