// 6980 Train Swapping

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void bubblesort(int *arr, int n, int &sum){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=tmp;
                sum++;
            }
        }
    }
}

int main() {
    int n; cin >> n;
    
    int m;
    for (int i = 0; i < n; i++){
        cin >> m;
        int sum = 0;
        int arr[51];
        for (int j = 0; j < m; j++){
            cin >> arr[j];
        }
        bubblesort(arr, m, sum);
        cout << "Optimal train swapping takes " << sum << " swaps.\n";
    }
    
    return 0;
}
