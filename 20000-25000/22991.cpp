#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

vector<pair<ll, ll>> group, bus;
multiset<ll> s;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;

    for (int i = 0, a, b; i < n; i++) {
        cin >> a >> b;
        group.push_back({ a, b });
    }

    for (int i = 0, a, b; i < m; i++) {
        cin >> a >> b;
        bus.push_back({ a, b });
    }

    sort(group.begin(), group.end());
    sort(bus.begin(), bus.end());

    ll cnt = 0, j = 0;
    for (ll i = 0; i < m; i++) { // 버스
        // 배차 요청 인원 수 <= 버스 수용 가능 인원 수
        while (j < n && group[j].first <= bus[i].first) { s.insert(group[j++].second); }

        // 버스 도착 예정 시간보다 크거나 같은 것들 중 최소를 고름
        multiset<ll>::iterator lb = s.lower_bound(bus[i].second);
        if (lb == s.end()) continue;
        s.erase(lb);
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}
