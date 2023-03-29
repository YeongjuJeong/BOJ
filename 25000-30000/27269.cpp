// 27269 Урок физкультуры

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool f(pair<int, int> &a, pair<int, int> &b){
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n; cin >> n;
    int a, b;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), f);
    int ans = 0;
    for (int i = 1; i < n; i++){
        ans = max(ans, abs(v[i - 1].second - v[i].second));
    }
    cout << ans;
    return 0;
}
