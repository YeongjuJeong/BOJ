// 8558 Silnia

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int ans = 1;
    for (int i = n; i >= 1; i--){
        ans = (ans * i) % 10;
    }
    cout << ans << '\n';
    return 0;
}
