// 26532 Acres

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double n, m; cin >> n >> m;
    cout << ceil(n * m / 24200);
    
    return 0;
}
