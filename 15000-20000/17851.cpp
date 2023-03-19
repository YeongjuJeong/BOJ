// 17851 This Problem's a Slam Dunk

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5], b[5];
    
    for (int i = 0; i < 5; i++) cin >> a[i];
    for (int i = 0; i < 5; i++) cin >> b[i];
    
    sort(a, a + 5); sort(b, b + 5);
    
//   state u 58 61 64 67 70
//   u state 59 62 65 68 71

    int ans = 0;
    for (int i = 0; i < 5; i++){
        if (a[i] > b[i]) ans++;
    }

    cout << ans << '\n';

    return 0;
}
