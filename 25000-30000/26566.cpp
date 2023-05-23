// 26566 Pizza

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n; cin >> n;
    double a, b, c, d, x, y;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        x = a / b;
        y = c * c * M_PI / d;
        cout << (x > y ? "Slice of pizza\n" : "Whole pizza\n");
    }

    return 0;
}
