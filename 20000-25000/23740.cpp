#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

struct bus {
    int start;
    int end;
    int cost;
    bus(int start, int end, int cost) {
        this->start = start;
        this->end = end;
        this->cost = cost;
    }
    bool operator<(bus a) {
        return this->start < a.start;
    }
};

vector<bus> v, ans;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    cin >> n;
    for (int i = 0, a, b, c; i < n; i++) {
        cin >> a >> b >> c;
        v.push_back(bus(a, b, c));
    }
    sort(v.begin(), v.end());

    bus cur = v.front();
    for (int i = 1; i < n; i++) {
        bus next = v[i];
        if (cur.end < next.start) {
            ans.push_back(cur);
            cur = next;
        }
        else {
            cur.end = max(cur.end, next.end);
            cur.cost = min(cur.cost, next.cost);
        }
    }
    ans.push_back(cur);

    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].start << ' ' << ans[i].end << ' ' << ans[i].cost << '\n';

    return 0;
}
