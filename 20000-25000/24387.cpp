// 24387 ИЗЛОЖЕНИЕ НА ПЧЕЛЕН МЕД

#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main() {
    ll a[3], b[3];
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];
    
    sort(a, a + 3); sort(b, b + 3);
    
    ll ans = 0;
    for (int i = 0; i < 3; i++){
        ans += a[i] * b[i];
    }
    
    cout << ans;

    return 0;
}
