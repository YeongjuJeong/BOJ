// 10817 세 수

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr, arr + 3);
    cout << arr[1];

    return 0;
}
