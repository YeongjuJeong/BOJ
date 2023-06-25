// 26772 Poziome serca

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << " @@@   @@@ "; // 1
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "@   @ @   @"; // 2
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "@    @    @"; // 3
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "@         @"; // 4
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << " @       @ "; // 5
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "  @     @  "; // 6
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "   @   @   "; // 7
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "    @ @    "; // 8
        if (i + 1 != n) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "     @     "; // 9
        if (i + 1 != n) cout << " ";
    }
    return 0;
}
