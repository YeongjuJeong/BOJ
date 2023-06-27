// 27182 Rain Diary

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m; cin >> n >> m;
    if (n - 7 == m + 7) cout << n - 7;
    else {
        if (n - 7 < 1) cout << m + 7;
        else cout << n - 7;
    }

    return 0;
}
