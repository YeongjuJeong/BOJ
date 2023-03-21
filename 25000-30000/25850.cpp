// 25850 A game Called Mind

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n; // the number of the players
    cin >> n;
    
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int k; cin >> k;
        for (int j = 0; j < k; j++){
            int x; cin >> x;
            v.push_back({x,i});
        }
    }
    
    sort(v.begin(), v.end());
    
    for (auto p: v){
        char c = 'A' + p.second;
        cout << c;
    }

    return 0;
}
