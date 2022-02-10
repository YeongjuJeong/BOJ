#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> v, s;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n; cin >> n;

    long long x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        s.push_back(i + 1 + v[i]);
    }

    sort(s.begin(), s.end(), greater<int>());

    cout << s[0] + 1 << '\n';

    return 0;
}