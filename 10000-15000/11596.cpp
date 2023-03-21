// 11596 Triangle

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a[3], b[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++){
        cin >> b[i];
    }
    
    sort(a, a + 3); sort(b, b + 3);
    
    int ans = 1;
    
    if (a[0] * a[0] + a[1] * a[1] != a[2] * a[2]) ans = 0;
    
    for (int i = 0; i < 3; i++){
        if (a[i] != b[i]){
            ans = 0;
            break;
        }
    }
    
    if (ans) cout << "YES";
    else cout << "NO";

    return 0;
}
