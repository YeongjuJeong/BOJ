#include <iostream>
using namespace std;

int arr[500005];

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n; cin >> n;

    for (int i = 2; i <= n; i++)
        for (int j = 2; i * j <= n; j++)
            arr[i * j] = 1;

    if (n == 1) cout << "1\n";
    else cout << n / 2 << '\n';

    for (int i = 1; i <= n; i++) {
        if (!arr[i]) cout << "1 ";
        else cout << i / 2 << ' ';
    }

    cout << '\n';

    return 0;
}