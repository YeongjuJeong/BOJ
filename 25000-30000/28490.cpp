// 28490 Area

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, m = 0; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        m = max(m, a * b);
    }
    cout << m;
    
    return 0;
}
