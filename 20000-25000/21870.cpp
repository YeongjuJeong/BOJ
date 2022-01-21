#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int n;
int arr[200001];

int calc(int l, int r) {
    if (l > r) return 0;
    if (l == r) return arr[l];

    int m = (ceil)((double)(l + r) / 2);
    int lcur = (l + 1 == m) ? arr[l] : gcd(arr[l], arr[l + 1]);
    for (int i = l + 2; i < m; i++) lcur = gcd(lcur, arr[i]);
    int rcur = (m == r) ? arr[m] : gcd(arr[m], arr[m + 1]);
    for (int i = m + 2; i <= r; i++) rcur = gcd(rcur, arr[i]);

    int lnext = calc(l, m - 1);
    int rnext = calc(m, r);

    return max(lcur + rnext, rcur + lnext);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    cout << calc(1, n) << '\n';

    return 0;
}
