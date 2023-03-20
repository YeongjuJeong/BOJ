// 25305 커트라인

#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main() {
    int n, k;
    int arr[1001];
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    
    cout << arr[n - k];

    return 0;
}
