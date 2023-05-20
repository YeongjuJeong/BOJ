// 25377 빵

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a, b, ans = -1;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a <= b) {
            if (ans == -1) ans = b;
            else ans = min(ans, b);
        }
    }
    
    cout << ans;
    
    return 0;
}
