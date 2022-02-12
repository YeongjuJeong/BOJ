#include <iostream>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int arr[6][6], visit[6][6], check[1000001];
int ans = 0;

void dfs(int i, int j, int sum, int cnt) {
	if (cnt == 5) {
		if (!check[sum]) {
			check[sum] = 1;
			ans++;
		}
		return;
	}

	int x, y;
	for (int k = 0; k < 4; k++) {
		x = i + dx[k];
		y = j + dy[k];
		if (0 <= x && x < 5 && 0 <= y && y < 5 && !visit[x][y])
			dfs(x, y, sum * 10 + arr[x][y], cnt + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			dfs(i, j, arr[i][j], 0);

	cout << ans << '\n';
	
	return 0;
}