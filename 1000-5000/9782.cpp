// 9782 Median

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cs = 1;
    while (1) {
        int n, arr[101];
        double ans;
        cin >> n;
        if (!n) break;
        for (int i = 1; i <= n; i++) cin >> arr[i];
        if (n % 2) ans = arr[(n + 1) / 2];
        else ans = (arr[n / 2] + arr[n / 2 + 1]) / 2.0;
        cout << "Case " << cs++ << ": " << fixed << setprecision(1) << ans << '\n';
    }
    
    return 0;
}
