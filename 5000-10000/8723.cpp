// 8723 Patyki

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int arr[3]; cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    if (arr[0] == arr[1] && arr[1] == arr[2]) cout << "2\n";
    else if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) cout << "1\n";
    else cout << "0\n";
    
    return 0;
}
