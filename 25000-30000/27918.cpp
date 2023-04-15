#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, d = 0, p = 0; cin >> n;
    char c;
    while (n--){
        cin >> c;
        if (c == 'D') d++;
        else p++;
        if (abs(d-p) >= 2) break;
    }
    cout << d << ":" << p;

    return 0;
}
