// 4696 St. Ives

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (1){
        long double x; cin >> x;
        if (!x) break;
        long double sum = 1, tmp = 1;
        for (int i = 0; i < 4; i++){
            tmp *= x;
            sum += tmp;
        }
        cout << fixed << setprecision(2) << sum << '\n';
    }
}
