// 26561 Population

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, a, b; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a - b / 7 + b / 4 << '\n';
    }

    return 0;
}
