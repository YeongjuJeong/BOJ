// 27328 三方比較 (Three-Way Comparison)

#include <iostream>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    if (a < b) cout << "-1\n";
    else if (a == b) cout << "0\n";
    else cout << "1\n";
    return 0;
}
