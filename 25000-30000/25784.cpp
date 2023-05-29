// 25784 Easy-to-Solve Expressions

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    if (arr[0] + arr[1] == arr[2]) cout << "1\n";
    else if (arr[0] * arr[1] == arr[2]) cout << "2\n";
    else cout << "3\n";
    
    return 0;
}
