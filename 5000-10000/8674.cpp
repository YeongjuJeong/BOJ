// 8674 Tabliczka

#include <iostream>
using namespace std;

int main() {
    long long x, y; cin >> x >> y;
    if (x%2 && y%2) cout << min(x, y);
    else cout << "0";
    return 0;
}
