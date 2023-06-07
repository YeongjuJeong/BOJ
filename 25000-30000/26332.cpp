// 26332 Buying in Bulk

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, a, b, sum; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a << ' ' << b << '\n';
        sum = b + (a - 1) * (b - 2);
        cout << sum << '\n';
    }
    
    return 0;
}
