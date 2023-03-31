// 11257 IT Passport Examination

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string s; double a, b, c;
        cin >> s >> a >> b >> c;
        if (a + b + c >= 55 && a >= 35.0 * 0.3
            && b >= 25 * 0.3 && c >= 40 * 0.3)
            cout << s << ' ' << a + b + c << " PASS\n";
        else cout << s << ' ' << a + b + c << " FAIL\n";
    }
    
    return 0;
}
