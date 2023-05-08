// 24079 移動 (Moving)

#include <iostream>
using namespace std;

int main() {
    int x, y, z; cin >> x >> y >> z;
    if (x * 60 + y * 60 <= z * 60 + 30) cout << "1";
    else cout << "0";

    return 0;
}
