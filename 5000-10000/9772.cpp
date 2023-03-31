// 9772 Quadrants

#include <iostream>
using namespace std;

int main() {
    double a, b;
    while (1){
        cin >> a >> b;
        if (!a && !b) {
            cout << "AXIS\n";
            break;
        }
        if (!a || !b) cout << "AXIS\n";
        else {
            if (a > 0 && b > 0) cout << "Q1\n";
            else if (a < 0 && b > 0) cout << "Q2\n";
            else if (a < 0 && b < 0) cout << "Q3\n";
            else cout << "Q4\n";
        }
    }
    
    return 0;
}
