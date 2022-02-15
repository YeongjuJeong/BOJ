#include <iostream>
#include <iomanip>
using namespace std;

int arr[51]; // 각 색상의 조약돌 개수

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    // 1~m : 각 조약돌의 색상
    int m, k, n = 0; cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> arr[i];
        n += arr[i];
    }
    cin >> k;

    long double sum = 0;
    for (int i = 1; i <= m; i++) {
        if (arr[i] < k) continue;
        long double tmp = 1;
        for (int j = 0; j < k; j++)
            tmp *= (arr[i] - j);
        for (int j = 1; j <= k; j++) tmp /= j;
        sum += tmp;
    }
    
    long double nck = 1;
    for (int i = 0; i < k; i++) nck *= (n - i);
    for (int i = 1; i <= k; i++) nck /= i;

    cout << fixed << setprecision(10) << sum / nck << '\n';

    return 0;
}