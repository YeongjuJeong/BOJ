// 20839 Betygsättning

#include <iostream>
using namespace std;

int main() {
    double x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    
    if (y / 2 <= b) {
        if (y <= b) {
            if (x / 2 <= a){
                if (x <= a) cout << "A";
                else cout << "B";
            }
            else cout << "C";
        }
        else cout << "D";
    }
    else cout << "E";
    
    return 0;
}
