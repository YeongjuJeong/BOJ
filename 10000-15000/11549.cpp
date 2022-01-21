#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0; cin >> n;
    for (int i = 0, x; i < 5; i++) {
        cin >> x;
        if (x == n) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
