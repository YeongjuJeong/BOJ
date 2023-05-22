// 25600 Triathlon

#include <iostream>
using namespace std;

int main() {
    int n, a, d, g, ans = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> d >> g;
        int sum = a * (d + g);
        if (a == d + g) sum *= 2;
        ans = max(ans, sum);
    }
    cout << ans;

    return 0;
}
