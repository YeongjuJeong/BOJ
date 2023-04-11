#include <iostream>
using namespace std;

int main() {
    int x, l, r;
    cin >> x >> l >> r;
    if (x < l) cout << l;
    else if (l <= x && x <= r) cout << x;
    else cout << r;
    return 0;
}
