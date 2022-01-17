#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);
    int n; cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x; v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int> comb(n - 3, 0);
    for (int i = 0; i < 3; i++) comb.push_back(1);
    do {
        int tmp[3], idx = 0;
        for (int i = 0; i < n; i++) {
            if (comb[i]) tmp[idx++] = v[i];
        }
        if (tmp[0] + tmp[1] > tmp[2]) {
            cout << tmp[0] + tmp[1] + tmp[2] << '\n';
            exit(0);
        }

    } while (next_permutation(comb.begin(), comb.end()));
    cout << "-1\n";
    return 0;
}