#include <iostream>
using namespace std;

int main() {
    long long r, c, n, ans;
    cin >> r >> c >> n;

    ans = (r % n ? r / n + 1 : r / n)
        * (c % n ? c / n + 1 : c / n);

    cout << ans << '\n';

    return 0;
}