// 6887 Squares

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0;
    while (1){
        if (++ans * ans <= n && n < (ans + 1) * (ans + 1)) break;
    }
    cout << "The largest square has side length " << ans << ".\n";
    return 0;
}
