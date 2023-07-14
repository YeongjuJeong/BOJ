// 1703 생장점

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    while (1) {
        int a, x, y, sum = 1; cin >> a;
        if (a == 0) break;
        for (int i = 0; i < a; i++) {
            cin >> x >> y;
            sum = sum * x - y;
        }
        cout << sum << '\n';
    }
    
    return 0;
}
