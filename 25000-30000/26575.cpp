// 26575 Pups

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; cin >> n;
    double a, b, c;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        cout << "$" << fixed << setprecision(2) << a * b * c <<'\n';
    }
    return 0;
}
