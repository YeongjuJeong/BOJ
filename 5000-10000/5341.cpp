// 5341 Pyramids

#include <iostream>

using namespace std;

int main() {
    while (1){
        int n; cin >> n;
        if (!n) break;
        cout << n * (n + 1) / 2 << '\n';
    }

    return 0;
}
