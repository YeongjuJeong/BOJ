// 27294 몇개고?

#include <iostream>

using namespace std;

int main() {
    int t, s; cin >> t >> s;
    
    if (s || t <= 11 || 17 <= t) cout << "280\n";
    else cout << "320\n";

    return 0;
}
