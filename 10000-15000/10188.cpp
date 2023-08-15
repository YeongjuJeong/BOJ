// 10188 Quadrilateral

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                cout << 'X';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    
    return 0;
}
