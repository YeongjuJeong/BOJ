// 26546 Reverse

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, a, b; cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s >> a >> b;
        int m = s.length();
        for (int j = 0; j < m; j++) {
            if (j < a || b <= j) cout << s[j];
        }
        cout << '\n';
    }
    
    return 0;
}
