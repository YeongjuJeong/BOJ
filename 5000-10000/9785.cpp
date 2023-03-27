// 9785 Damage Over Time

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    int a, b;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), greater<>());
    int dot = v[0].first, t = v[0].second;
    for (int i = 1; i < m; i++){
        dot += v[i].first;
        t = min(t, v[i].second);
    }
    
    cout << dot << ' ' << t << '\n';
    
    return 0;
}
