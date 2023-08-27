// 28295 체육은 코딩과목 입니다

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int x, d = 40; // N
    for (int i = 0; i < 10; i++) {
        cin >> x;
        if (x == 1 || x == 2) d += x;
        else d--;
    }
    
    if (d % 4 == 0) cout << "N";
    else if (d % 4 == 1) cout << "E";
    else if (d % 4 == 2) cout << "S";
    else cout << "W";
    
    return 0;
}
