// 9784 Boiled Eggs

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; cin >> t;
    int cnt = 0;
    while (cnt++ < t){
        // 계란 p개 초과 x q그램 초과 x
        int n, p, q;
        int arr[31];
        cin >> n >> p >> q;
        for (int i = 0; i < n; i++){cin >> arr[i];}
        sort(arr, arr + n);
        int sum = 0, ans = 0;
        for (int i = 1; i <= n; i++){
            if (sum + arr[i - 1] > q || i > p){break;}
            sum += arr[i - 1];
            ans = i;
        }
        cout << "Case " << cnt << ": " << ans << '\n';
    }
    
    return 0;
}
