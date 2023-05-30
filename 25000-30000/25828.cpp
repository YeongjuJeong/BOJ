// 25828 Corona Virus Testing

#include <iostream>
using namespace std;

int main() {
    int g, p, t, a, b;
    cin >> g >> p >> t;
    a = g * p;
    b = g + p * t;
    if (a < b) cout << "1\n";
    else if (a > b) cout << "2\n";
    else cout << "0\n";
    
    return 0;
}
