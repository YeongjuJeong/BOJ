// 8715 Permutacja
// 처음에 v[i] !+ i + 1 이라는 조건을 빠뜨려서 틀렸다.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    int ans = 0;
    for (int i = 0; i < n; i++){
        if ((upper_bound(v.begin(), v.end(), v[i])
        - lower_bound(v.begin(), v.end(), v[i]) != 1)
        || (v[i] != i + 1)){
            ans = 1; break;
        }
    }
    
    if (ans == 0) cout << "TAK\n";
    else cout << "NIE\n";
    
    return 0;
}
