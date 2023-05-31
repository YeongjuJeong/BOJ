// 25858 Divide the Cash

#include <iostream>
using namespace std;

int main() {
    int n, d, sum = 0; cin >> n >> d;
    int arr[31];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < n; i++){
        cout << (d / sum) * arr[i] << '\n';
    }
    
    return 0;
}
