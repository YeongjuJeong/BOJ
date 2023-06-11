// 26530 Shipping

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n;
    string s;
    double x, c, sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        cin >> m;
        for (int j = 0; j < m; j++) {
            cin >> s >> x >> c;
            sum += x * c;
        }
        cout << "$" << fixed << setprecision(2) << sum << '\n';
    }
    
    return 0;
}
