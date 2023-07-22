// 2783 삼각 김밥

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    double x, y, ans;
    int n;
    cin >> x >> y >> n;
    ans = x / y * 1000;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        ans = min(ans, x / y * 1000);
    }
    
    cout << fixed << setprecision(2) << ans;
    
    return 0;
}
