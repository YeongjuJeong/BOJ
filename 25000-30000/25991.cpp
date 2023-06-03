// 25991 Lots of Liquid

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    double x, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += pow(x, 3.0);
    }
    cout << fixed << setprecision(7) << pow(sum, 1.0 / 3.0);

    return 0;
}
