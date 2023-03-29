// 23968 알고리즘 수업 - 버블 정렬 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10005];
void bubble_sort(int n, int k){
    int cnt = 0;
    for (int last = n; last > 0; last--){
        for (int i = 0; i < last - 1; i++){
            if (arr[i] > arr[i + 1]){
                swap(arr[i], arr[i + 1]);
                if (++cnt == k){
                    cout << arr[i] << ' ' << arr[i + 1] << '\n';
                    return;
                }
            }
        }
    }
    cout << "-1\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++){cin>>arr[i];}
    bubble_sort(n, k);
    return 0;
}
