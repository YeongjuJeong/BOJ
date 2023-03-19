// 26513 Egg Drop
// 시작할 수 있는 층수를 잘못 생각해서 틀렸던 문제

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    while (1){
        int a, b;
        vector<int> v1, v2;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        for (int i = 0; i < a; i++){
            int x; string s;
            cin >> x >> s;
            if (!s.compare("SAFE")) v1.push_back(x);
            else v2.push_back(x);
        }
        sort(v1.begin(), v1.end(), greater<>());
        sort(v2.begin(), v2.end());
        
        int ans1, ans2;
        if (v1.empty()) ans1 = 2;
        else ans1 = v1[0] + 1;
        
        if (v2.empty()) ans2 = b - 1;
        else ans2 = v2[0] - 1;
        
        cout << ans1 << ' ' << ans2 << '\n';
    }
    
    return 0;
}
