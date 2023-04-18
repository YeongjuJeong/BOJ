// 15128 Congruent Numbers

#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int p1, q1, p2, q2;
    cin >> p1 >> q1 >> p2 >> q2;
    int g1 = gcd(p1, q1);
    int g2 = gcd(p2, q2);
    p1 /= g1;
    q1 /= g1;
    p2 /= g2;
    q2 /= g2;
    int g3 = gcd(p1, q2);
    int g4 = gcd(p2, q1);
    p1 /= g3;
    q1 /= g4;
    p2 /= g4;
    q2 /= g3;
    if (q1 == 1 && q2 == 1 && (p1 % 2 == 0 || p2 % 2 == 0)) cout << "1";
    else cout << "0";
    
    return 0;
}
