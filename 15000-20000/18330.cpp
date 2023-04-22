// 18330 Petrol

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    if (n > k + 60) cout << 1500 * (k + 60) + 3000 * (n - k - 60);
    else cout << 1500 * n;
    
    return 0;
}
