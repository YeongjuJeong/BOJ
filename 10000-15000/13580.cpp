// 13580 Andando no tempo

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int a, b, c; cin >> a >> b >> c;
    if (a == b || b == c || c == a
        || (a + b == c) || (b + c == a) || (c + a == b))
        cout << "S\n";
    else cout << "N\n";

    return 0;
}
