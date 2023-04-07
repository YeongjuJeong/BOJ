// 17009 Winning Score

#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int sum1 = a1 * 3 + b1 * 2 + c1;
    int sum2 = a2 * 3 + b2 * 2 + c2;
    if  (sum1 > sum2) cout << "A";
    else if (sum1 < sum2) cout << "B";
    else cout << "T";
    return 0;
}
