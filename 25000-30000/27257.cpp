// 27257 Любитель нулей

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string s; cin >> s;
    int sum = 0, cnt = 0, first = 1;
    for (auto c: s) {
        if (c == '0') cnt++;
        else {
            if (!first) {
                sum += cnt;
                cnt = 0;
            }
            else {
                first = 0;
                cnt = 0;
            }
        }
    }
    cout << sum << '\n';

    return 0;
}
