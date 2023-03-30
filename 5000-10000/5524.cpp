// 5524 입실 관리

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int size = s.size();
        for (int j = 0; j < size; j++){
            if ('A' <= s[j] && s[j] <= 'Z') s[j] += 32;
        }
        cout << s << '\n';
    }
    return 0;
}
