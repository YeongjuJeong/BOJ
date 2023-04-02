// 14173 Square Pasture

#include <iostream>
using namespace std;

int main() {
    int x, y;
    int minx = 11, maxx = 0, miny = 11, maxy = 0;
    for (int i = 0; i < 4; i++){
        cin >> x >> y;
        minx = min(minx, x);
        maxx = max(maxx, x);
        miny = min(miny, y);
        maxy = max(maxy, y);
    }
    int m = max(maxx - minx, maxy - miny);
    cout << m * m;
    
    return 0;
}
