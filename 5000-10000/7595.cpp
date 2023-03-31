// 7595 Triangles

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (1){
        int n; cin >> n;
        if (!n) break;
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                cout << "*";
            }
            cout << '\n';
        }
    }
    return 0;
}
