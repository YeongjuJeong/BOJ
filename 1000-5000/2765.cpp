// 2765 자전거 속도

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    double a, b, c; // 지름, 회전수, 시간
    int n = 1;
    while (1) {
        cin >> a >> b >> c;
        if (b == 0) break;
        cout << "Trip #" << n++ << ": " << fixed << setprecision(2) << a * 3.1415927 * b / (5280 * 12) << " " << a * 3.1415927 * b / (5280 * 12) / (c / 60 / 60) << '\n';
    }
    
    return 0;
}
