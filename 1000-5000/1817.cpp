#include <iostream>
#include <algorithm>
using namespace std;

int arr[51];

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (sum + arr[i] <= m) {
            sum += arr[i];
        }
        else {
            sum = arr[i];
            cnt++;
        }
    }

    if (sum) cnt++;

    cout << cnt << '\n';

    return 0;
}
