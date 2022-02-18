#include <iostream>
#include <algorithm>
#define ll long long
#define ld long double
using namespace std;

ll n, t;
ld cnt = 0;
pair<ll, ll> arr[13]; // 공의 나중자리, 처음자리

void calc() {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i].first >= arr[j].first) cnt++;
}

void move(int cur) {
    if (cur == n) {
        calc();
        return;
    }

    arr[cur].first = arr[cur].second - t; // 왼쪽으로 가는 경우
    move(cur + 1);

    arr[cur].first = arr[cur].second + t; // 오른쪽으로 가는 경우
    move(cur + 1);
}

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    ld div = 1;
    for (ll i = 0, x; i < n; i++, div *= 2) {
        cin >> x;
        arr[i] = { x, x };
    }
    cin >> t;

    sort(arr, arr + n);

    move(0);

    ld ans = cnt / div;
    cout << ans << '\n';

    return 0;
}
