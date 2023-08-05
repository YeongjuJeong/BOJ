// 2997 네 번째 수

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int arr[3];
    
    for (int i = 0; i < 3; i++) cin >> arr[i];
    
    sort(arr, arr + 3);
    
    if (arr[2] - arr[1] == arr[1] - arr[0]) cout << arr[2] + arr[2] - arr[1];
    else {
        if (arr[2] - arr[1] > arr[1] - arr[0]) cout << arr[1] + arr[1] - arr[0];
        else cout << arr[0] + arr[2] - arr[1];
    }
    
    return 0;
}
