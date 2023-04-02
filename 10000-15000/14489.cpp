// 14489 치킨 두 마리 (...)

#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b >= c + c) cout << a + b - c - c;
    else cout << a + b;
    return 0;
}
