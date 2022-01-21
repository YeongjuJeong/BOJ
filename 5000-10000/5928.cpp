#include <iostream>
#include <queue>
#include <stack>
#include <cstring>
#define INF 1e9
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int d, h, m, sum = 0; cin >> d >> h >> m;
    if ((d < 11) || (d == 11 && h < 11) || (d == 11 && h == 11 && m < 11)) {
        cout << "-1\n"; return 0;
    }

    if (m >= 11) sum += m - 11;
    else {
        h--;
        sum += m + 60 - 11;
    }

    if (h >= 11) sum += (h - 11) * 60;
    else {
        d--;
        sum += (h + 24 - 11) * 60;
    }

    sum += (d - 11) * 24 * 60;

    cout << sum << '\n';

    return 0;
}
