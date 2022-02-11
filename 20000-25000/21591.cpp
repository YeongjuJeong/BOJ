#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a - 2 >= x && b - 2 >= y) cout << "1\n";
    else cout << "0\n";

    return 0;
}