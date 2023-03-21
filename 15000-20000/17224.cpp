// 17224 APC는 왜 서브태스크 대회가 되었을까?

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, l, k;
    cin >> n >> l >> k;
    
    vector<int> v;
    
    int a, b, score;
    for (int i = 0; i < n; i++){
        score = 0;
        cin >> a >> b;
        if (a <= l) {
            score += 100;
            if (b <= l) score += 40;
        }
        v.push_back(score);
    }
    
    sort(v.begin(), v.end(), greater<>());
    
    int ans = 0;
    for (int i = 0; i < k; i++){
        ans += v[i];
    }
    
    cout << ans;

    return 0;
}
