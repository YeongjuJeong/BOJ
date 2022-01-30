#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int tmp = 3;
    for (int i = 1; i < n; i++) tmp += (tmp - 1);

    cout << tmp * tmp << '\n';

    return 0;
}