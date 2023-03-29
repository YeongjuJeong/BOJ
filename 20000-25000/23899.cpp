// 23899 알고리즘 수업 - 선택 정렬 5
// 배열 B의 원소가 정렬된 배열 A의 형태일 경우를 생각하지 않아서 틀렸음

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[10005], brr[10005];

int selection_sort(int n){
    int cnt = 0;
    for (int last = n - 1; last >= 0; last--){
        int mark = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] != brr[i]){
                mark = 1;
                break;
            }
        }
        if (!mark) {
            cout << "1\n";
            return 1;
        }
        if (last == 0) break;
        
        int mx = 0, idx;
        for (int i = 0; i <= last; i++){
            if (mx <= arr[i]){
                mx = arr[i];
                idx = i;
            }
        }
        if (idx != last) {
            swap(arr[idx], arr[last]);
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    for (int i = 0; i < n; i++) { cin >> brr[i]; }
    if (!selection_sort(n)) cout << "0\n";
    
    return 0;
}
