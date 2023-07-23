// 2863 이게 분수?

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a, b, c, d, arr[4], m = 0;
    cin >> a >> b >> c >> d;
    arr[0] = a / c + b / d; m = max(m, arr[0]);
    arr[1] = c / d + a / b; m = max(m, arr[1]);
    arr[2] = d / b + c / a; m = max(m, arr[2]);
    arr[3] = b / a + d / c; m = max(m, arr[3]);
    
    for (int i = 0; i < 4; i++) {
        if (m == arr[i]) {
            cout << i;
            break;
        }
    }
    
    return 0;
}
