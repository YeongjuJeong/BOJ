#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

queue<pair<pair<int, int>, int>> q; // second는 벽 부쉈는지 확인. 0이면 안부숨 1이면 부숨

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int arr[1002][1002];
int visit[1002][1002][2]; // [0]는 벽 안부수고 방문한거 [1]은 벽 부수고 방문한거

int n, m;

void bfs(int i, int j) {
    int a, b, c, x, y;

    q.push({ { i, j }, 0 });
    visit[i][j][0] = 1; // 시작하는 칸도 포함해서 센다

    while (!q.empty()) {
        a = q.front().first.first;
        b = q.front().first.second;
        c = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++) {
            x = a + dx[k];
            y = b + dy[k];

            if (0 < x && x <= n && 0 < y && y <= m) {
                if (arr[x][y] && !visit[x][y][1] && c == 0) { // 벽인 곳
                    visit[x][y][1] = visit[a][b][0] + 1;
                    q.push({ { x, y }, 1 }); // 벽 부수고 옴
                }
                else if (!arr[x][y] && !visit[x][y][c]) {
                    visit[x][y][c] = visit[a][b][c] + 1;
                    q.push({ { x, y }, c });
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        for (int j = 1; j <= m; j++)
            arr[i][j] = s[j - 1] - '0';
    }

    bfs(1, 1);

    if (!visit[n][m][0] && !visit[n][m][1]) cout << "-1\n";
    else if (!visit[n][m][0]) cout << visit[n][m][1] << '\n';
    else if (!visit[n][m][1]) cout << visit[n][m][0] << '\n';
    else cout << min(visit[n][m][0], visit[n][m][1]) << '\n';

    return 0;
}