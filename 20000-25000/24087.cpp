// 24087 アイスクリーム (Ice Cream)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double s, a, b; cin >> s >> a >> b;
    if (s < a) cout << "250";
    else cout << 250 + ceil((s - a) / b) * 100;

    return 0;
}
