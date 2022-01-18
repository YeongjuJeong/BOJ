#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

bool f(pair<int, int> a, pair<int, int> b) {
    if (a.first == 0) return false;
    else if (b.first == 0) return true;
    else if (a.second == 0 && b.second == 0) return a.first < b.first;
    else return a.second * b.first < a.first * b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0, a, b; i < n; i++) {
        cin >> a >> b;
        v.push_back({ a, b });
    }

    sort(v.begin(), v.end(), f);

    long long t = 0;
    for (int i = 0; i < n; i++)
        t = (t + v[i].first * t + v[i].second) % 40000;

    cout << t << '\n';

    return 0;
}