// 26592 Triangle Height

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    double a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << "The height of the triangle is " << fixed << setprecision(2) << 2 * a / b << " units\n";
    }
    
    return 0;
}
