// 3047 ABC

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a, a + 3);
    
    for (int i = 0; i < 3; i++) cin >> b[i];
    
    for (int i = 0; i < 3; i++) {
        if (b[i] == 'A') cout << a[0];
        else if (b[i] == 'B') cout << a[1];
        else cout << a[2];
        
        if (i != 2) cout << ' ';
    }
    
    return 0;
}
