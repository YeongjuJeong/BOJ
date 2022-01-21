#include <iostream>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    long long n, k; cin >> n >> k;

    long long m = (2 * n - k + 1) / 2;
    long long a = 2 * n - 1;
    long long d = -2;
    long long sum;
    if (k > 2 * n) sum = (2 * n + 1) * (2 * n + 1);
    else sum = m * (2 * a + (m - 1) * d) + (2 * n + 1) * k;

    cout << sum << '\n';

    return 0;
}
