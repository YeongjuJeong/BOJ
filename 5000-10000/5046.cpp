#include <iostream>
#define ll long long
using namespace std;

typedef struct hotels {
    ll price;
    int limit[1001];
};

hotels h[19];

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, budget, hotel, week;
    cin >> n >> budget >> hotel >> week;
    long long ans = budget;
    for (int i = 0; i < hotel; i++) {
        cin >> h[i].price;
        for (int j = 0; j < week; j++) {
            cin >> h[i].limit[j];
            if (n <= h[i].limit[j]) ans = min(ans, n * h[i].price);
        }
    }

    if (ans >= budget) cout << "stay home\n";
    else cout << ans << '\n';

    return 0;
}
