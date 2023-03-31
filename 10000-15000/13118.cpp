// 13118 뉴턴과 사과

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int x, y, r; cin >> x >> y >> r;
    
    if (a == x) cout << "1\n";
    else if (b == x) cout << "2\n";
    else if (c == x) cout << "3\n";
    else if (d == x) cout << "4\n";
    else cout << "0\n";
    
    return 0;
}
