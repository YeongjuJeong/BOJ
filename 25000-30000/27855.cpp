// 27855 Cornhole

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c, d, m, n; cin >> a >> b >> c >> d;
    m = a * 3 + b;
    n = c * 3 + d;
    if (m > n) cout << "1 " << m - n;
    else if (m < n) cout << "2 " << n - m;
    else cout << "NO SCORE";

    return 0;
}
