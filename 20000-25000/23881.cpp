// 23881 알고리즘 수업 - 선택 정렬 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[10005];

int selection_sort(int n, int k){
    int cnt = 0;
    for (int last = n - 1; last > 0; last--){
        int mx = 0, idx;
        for (int i = 0; i <= last; i++){
            if (mx <= arr[i]){
                mx = arr[i];
                idx = i;
            }
        }
        if (idx != last) {
            swap(arr[idx], arr[last]);
            cnt++;
            if (cnt == k){
                cout << arr[idx] << ' ' << arr[last] << '\n';
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    if (!selection_sort(n, k)) cout << "-1\n";
    
    return 0;
}
