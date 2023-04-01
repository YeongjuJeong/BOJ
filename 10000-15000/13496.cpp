// 13496 The Merchant of Venice

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int k; cin >> k;
    for (int i = 1; i <= k; i++){
        int n, s, d; cin >> n >> s >> d;
        // n: 무역선 수, s: 배의 속도 mile per day, d: 남은 일 수
        double di;
        long long vi, ans = 0;
        for (int j = 0; j < n; j++){
            cin >> di >> vi;
            if (di / s <= d) ans += vi;
        }
        cout << "Data Set " << i << ":\n" << ans << "\n\n";
    }

    return 0;
}
