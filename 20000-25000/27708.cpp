// 27708 Antisort
// 출력 형식을 바르게 안 써서 틀림..

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t; cin >> t;
    cout << t << '\n' << '\n';
    while (t--){
        int n; cin >> n;
        cout << n << '\n';
        vector<int> v;
        int x;
        for (int i = 0; i < n; i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        swap(v[0], v[1]);
        for (int i = 0; i < n; i++){
            cout << v[i] << ' ';
        }
        cout << '\n' << '\n';
    }
    return 0;
}
