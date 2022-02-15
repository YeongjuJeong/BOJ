#include <iostream>
#include <vector>
using namespace std;

int arr[500005];

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n; cin >> n;

    arr[1] = 1;
    int color = 2;
    for (int i = 2; i <= n; i++) {
        if (arr[i]) continue;
        for (int j = 1; i * j <= n; j++)
            arr[i * j] = color;
        color++;
    }

    cout << color - 1 << '\n';
    for (int i = 1; i <= n; i++) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}