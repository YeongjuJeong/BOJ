// 26500 Absolutely

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    double a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << fixed << setprecision(1) << sqrt(pow(a - b, 2)) << '\n';
    }
    
    return 0;
}
