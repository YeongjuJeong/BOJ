// 18698 The Walking Adam

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int cnt = 0;
        for (auto c : s){
            if (c == 'D') break;
            cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
