// 26209 Intercepting Information

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int x, mark = 0;
    for (int i = 0; i < 8; i++){
        cin >> x;
        if (x != 0 && x != 1) mark = 1;
    }
    if (mark) cout << "F\n";
    else cout << "S\n";

    return 0;
}
