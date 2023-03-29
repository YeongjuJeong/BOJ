// 11038 Entrance Examination

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, mn, mx;
    while(1){
        cin >> n >> mn >> mx;
        if (!n && !mn && !mx) break;
        int prev, next;
        cin >> prev;
        vector<pair<int, int>> v;
        for (int i = 1; i < n; i++){
            cin >> next;
            v.push_back({prev - next, i});
            prev = next;
        }
        sort(v.begin(), v.end(), greater<>());
        for (int i = 0; i < n; i++){
            if (mn <= v[i].second && v[i].second <= mx){
                cout << v[i].second << '\n';
                break;
            }
        }
    }
    
    return 0;
}
