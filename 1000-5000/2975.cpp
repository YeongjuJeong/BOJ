// 2975 Transactions

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b;
    char c;
    while (1) {
        cin >> a >> c >> b;
        if (!a && c == 'W' && !b) break;
        if (c == 'W') {
            if (a - b < -200) cout << "Not allowed\n";
            else cout << a - b << '\n';
        }
        else {
            cout << a + b << '\n';
        }
    }
    
    return 0;
}
