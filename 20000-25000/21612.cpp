#include <iostream>
using namespace std;

int main() {
    int b; // 물이 끓기 시작하는 온도
    cin >> b;
    int p = 5 * b - 400;
    cout << p << '\n';
    if (p == 100) cout << 0;
    else if (p > 100) cout << -1;
    else cout << 1;
    
    return 0;
}
