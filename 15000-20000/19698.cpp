#include <iostream>
using namespace std;

int main() {
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int ww = w / l;
    int hh = h / l;
    if (ww * hh > n) cout << n;
    else cout << ww * hh;
    return 0;
}
