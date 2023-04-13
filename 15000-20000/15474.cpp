// 15474 鉛筆 (Pencils)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int x = ceil(n / a);
    int y = ceil(n / c);
    if (x * b >= y * d) cout << y * d;
    else cout << x * b;
    
    return 0;
}
