// 24052 알고리즘 수업 - 삽입 정렬 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10005];

void insertion_sort(int n, int k){
    int cnt = 0;
    for (int i = 1; i < n; i++){
        int loc = i - 1;
        int item = arr[i];
        
        while (0 <= loc && item < arr[loc]){
            arr[loc + 1] = arr[loc];
            if (++cnt == k){
                for (int i = 0; i < n; i++){
                    cout << arr[i] << ' ';
                }
                cout << '\n';
                return;
            }
            loc--;
        }
        if (loc + 1 != i) {
            arr[loc+1] = item;
            if (++cnt == k){
                for (int i = 0; i < n; i++){
                    cout << arr[i] << ' ';
                }
                return;
            }
        }
    }
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    insertion_sort(n, k);
    return 0;
}
