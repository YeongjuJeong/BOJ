// 24736 Football Scoring

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int arr[5] = { 6, 3, 2, 1, 2 };
    int x, sum1 = 0, sum2 = 0;
    for (int i = 0; i < 5; i++){
        cin >> x;
        sum1 += x * arr[i];
    }
    for (int i = 0; i < 5; i++){
        cin >> x;
        sum2 += x * arr[i];
    }
    
    cout << sum1 << ' ' << sum2 << '\n';
    
    return 0;
}
