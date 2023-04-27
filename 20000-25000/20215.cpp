// 20215 Cutting Corners

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double w, h; cin >> w >> h;
    double sum = w + h - sqrt(pow(w, 2) + pow(h, 2));
    cout << fixed << setprecision(6) << sum;

    return 0;
}
