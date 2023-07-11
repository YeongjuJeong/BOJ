// 28097 모범생 포닉스

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, x, sum = -8; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x + 8;
    }
    cout << sum / 24 << ' ' << sum % 24;

    return 0;
}
