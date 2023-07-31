// 3034 앵그리 창영

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    double w, h, x, m;
    cin >> n >> w >> h;
    m = sqrt(pow(w, 2) + pow(h, 2));
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x <= m) cout << "DA\n";
        else cout << "NE\n";
    }
    
    return 0;
}
