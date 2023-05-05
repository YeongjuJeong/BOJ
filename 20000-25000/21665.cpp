// 21665 Миша и негатив

#include <iostream>
using namespace std;

int main() {
    char arr1[101][101], arr2[101][101];
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr2[i][j];
        }
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr1[i][j] == arr2[i][j]) cnt++;
        }
    }
    cout << cnt;

    return 0;
}
