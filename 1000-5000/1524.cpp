// 1524 세준세비

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, m, x; cin >> n >> m;
        vector<pair<ll, char>> v;
        for (int i = 0; i < n; i++){
            cin >> x;
            v.push_back({x, 'S'});
        }
        for (int j = 0; j < m; j++){
            cin >> x;
            v.push_back({x, 'B'});
        }
        sort(v.begin(), v.end(), greater<>());
        cout << v[0].second << '\n';
    }

    return 0;
}
