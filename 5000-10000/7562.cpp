#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int n, ans;
int arr[301][301], visit[301][301];
pair<int, int> st, en;

void bfs() {
	queue<pair<int, int>> q;
	memset(visit, -1, sizeof(visit));

	q.push(st);
	visit[st.first][st.second] = 0;
	int a, b, x, y;
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();

		if (a == en.first && b == en.second) {
			ans = visit[a][b];
			return;
		}

		for (int k = 0; k < 8; k++) {
			x = a + dx[k];
			y = b + dy[k];
			if (0 <= x && x < n && 0 <= y && y < n && visit[x][y] == -1) {
				visit[x][y] = visit[a][b] + 1;
				q.push({ x, y });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n >> st.first >> st.second >> en.first >> en.second;
		bfs();
		cout << ans << '\n';
	}
	
	return 0;
}