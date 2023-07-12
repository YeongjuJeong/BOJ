// 27890 특별한 작은 분수

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int x, n; cin >> x >> n;
    for (int i = 0; i < n; i++){
        if (x % 2) x = (x * 2) ^ 6;
        else x = (x / 2) ^ 6;
    }
    cout << x;

    return 0;
}
