// 11945 뜨거운 붕어빵

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    char arr[11][11];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> arr[i][j];
    for (int i = 0; i < n; i++){
        for (int j = m - 1; j >= 0; j--) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}
