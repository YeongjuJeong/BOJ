// 13623 Zero or One

#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    if (a != b && a != c) cout << "A";
    else if (a != b && b != c) cout << "B";
    else if (a != c && b != c) cout << "C";
    else cout << "*";
    return 0;
}
