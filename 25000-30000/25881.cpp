// 25881 Electric Bill

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, n, x;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x < 1000) cout << x << ' ' << x * a << '\n';
        else cout << x << ' ' << 1000 * a + (x - 1000) * b << '\n';
    }

    return 0;
}
