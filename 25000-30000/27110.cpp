// 27110 특식 배부

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, x, sum = 0; cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> x;
        sum += min(x, n);
    }
    
    cout << sum;

    return 0;
}
