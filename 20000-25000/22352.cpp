#include <iostream>
#include <queue>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int before[31][31], after[31][31], visit[31][31];
int n, m, bnum, anum, bx, by;

queue<pair<int, int>> q;

void bfs(int i, int j) {
    int a, b, x, y;

    before[i][j] = anum;
    visit[i][j] = 1;
    q.push({ i, j });

    while (!q.empty()) {
        a = q.front().first;
        b = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++) {
            x = a + dx[k];
            y = b + dy[k];

            if (0 <= x && x < n && 0 <= y && y < m
                && before[x][y] == bnum && !visit[x][y]) {
                visit[x][y] = 1;
                before[x][y] = anum;
                q.push({ x, y });
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> before[i][j];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> after[i][j];

    int mark = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (before[i][j] != after[i][j]) {
                bnum = before[i][j];
                anum = after[i][j];
                mark = 1;
                bx = i; by = j;
                break;
            }
        }
        if (mark) break;
    }

    if (!mark) { cout << "YES\n"; return 0; }

    bfs(bx, by);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (before[i][j] != after[i][j]) {
                cout << "NO\n"; return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}