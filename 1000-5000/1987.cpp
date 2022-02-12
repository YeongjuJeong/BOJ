#include <iostream>
#include <vector>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int n, m, ans = 0;
int arr[21][21], visit[21][21], alpha[26];

void dfs(int i, int j, int cnt) {
	int x, y;

	ans = max(ans, cnt);

	visit[i][j] = 1;
	alpha[arr[i][j]] = 1;

	for (int k = 0; k < 4; k++) {
		x = i + dx[k];
		y = j + dy[k];
		if (0 <= x && x < n && 0 <= y && y < m
			&& !visit[x][y] && !alpha[arr[x][y]]) {
			dfs(x, y, cnt + 1);
		}
	}

	visit[i][j] = 0;
	alpha[arr[i][j]] = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	char c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;
			arr[i][j] = c - 'A';
		}
	}

	dfs(0, 0, 1);

	cout << ans << '\n';
	
	return 0;
}