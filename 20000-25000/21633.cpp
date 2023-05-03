// 21633 Bank Transfer

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double k; cin >> k;
    double ans = 25 + k * 0.01;
    ans = max(100.0, ans);
    ans = min(2000.0, ans);
    
    cout << fixed << setprecision(3) << ans << '\n';

    return 0;
}
