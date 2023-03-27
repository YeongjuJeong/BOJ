// 5738 He is offside!

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while (1) {
        int a, d; // attacking and defending players (2 ~ 11)
        cin >> a >> d;
        if (!a && !d) break;
        
        vector<pair<int, int>> v;
        
        int l;
        for (int i = 0; i < a; i++){
            cin >> l;
            v.push_back({l, 1});
        }
        
        for (int i = 0; i < d; i++){
            cin >> l;
            v.push_back({l, 0});
        }
        
        sort(v.begin(), v.end());
        
        int ans = 0;
        if (v[0].second == 1 || v[1].second == 1) ans = 1;
        
        cout << (ans ? "Y\n" : "N\n");
    }
    
    return 0;
}
