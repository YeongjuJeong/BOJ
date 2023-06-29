// 27239 Шахматная доска

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n; cin >> n;
    cout << (char)('a' + (n - 1) % 8) << (n - 1) / 8 + 1;

    return 0;
}
