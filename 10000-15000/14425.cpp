#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

set<string> s;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;

    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        s.insert(str);
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (s.find(str) != s.end()) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}