// 16099 Larger Sport Facility

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--){
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a * b > c * d) cout << "TelecomParisTech\n";
        else if (a * b < c * d) cout << "Eurecom\n";
        else cout << "Tie\n";
    }

    return 0;
}
