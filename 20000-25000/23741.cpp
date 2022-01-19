#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, x, y;
int ball[1001][1001];
int ans[1001][1001];
vector<int> v;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    cin >> n >> m >> x >> y;

    for (int i = 0, a, b; i < m; i++) {
        cin >> a >> b;
        ball[a][b] = 1;
        ball[b][a] = 1;
    }

    ans[0][x] = 1;
    for (int k = 0; k < y; k++) {
        for (int i = 1; i <= n; i++) {
            if (!ans[k][i]) continue;
            for (int j = 1; j <= n; j++) {
                if (ball[i][j]) ans[k + 1][j] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (ans[y][i] == 1) v.push_back(i);
    }
    if (v.empty()) cout << "-1\n";
    else {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << ' ';
        cout << '\n';
    }

    return 0;
}
