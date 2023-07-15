// 3512 Flat

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, bed = 0, cost = 0, sum = 0;
    string s;
    double a, c, ca = 0;
    cin >> n >> c;
    while (n--) {
        cin >> a >> s;
        sum += a;
        if (!s.compare("balcony")) ca += (a / 2);
        else if (!s.compare("bedroom")) {
            bed += a;
            ca += a;
        }
        else ca += a;
    }
    
    cout << sum << '\n' << bed << '\n' << fixed << setprecision(6) << ca * c;

    return 0;
}
