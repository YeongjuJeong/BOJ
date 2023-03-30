// 4714 Lunacy

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (1){
        long double x; cin >> x;
        if (x < 0) break;
        cout << "Objects weighing "
            << fixed << setprecision(2) << x
            << " on Earth will weigh "
            <<  x * 0.167
            << " on the moon.\n";
    }
}
