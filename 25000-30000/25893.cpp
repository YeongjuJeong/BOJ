// 25893 Majestic 10

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, x, y, z; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y >> z;
        cout << x << ' ' << y << ' ' << z << '\n';
        if (x < 10 && y < 10 && z < 10) cout << "zilch\n\n";
        else if ((x >= 10 && y < 10 && z < 10)
        || (x < 10 && y >= 10 && z < 10)
        || (x < 10 && y < 10 && z >= 10)) cout << "double\n\n";
        else if ((x < 10 && y >= 10 && z >= 10)
        || (x >= 10 && y < 10 && z >= 10)
        || (x >= 10 && y >= 10 && z < 10)) cout << "double-double\n\n";
        else cout << "triple-double\n\n";
    }

    return 0;
}
