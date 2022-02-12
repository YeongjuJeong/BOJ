#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int n, m; // n, m은 1000이하
int arr[1001][1001], visit[1001][1001];

pair<int, int> start;

queue<pair<int, int>> q;

void bfs() {
	memset(visit, -1, sizeof(visit));

	q.push(start);
	visit[start.first][start.second] = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!arr[i][j]) visit[i][j] = 0;
	
	int a, b, x, y;
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();

		for (int k = 0; k < 4; k++) {
			x = a + dx[k];
			y = b + dy[k];
			if (0 <= x && x < n && 0 <= y && y < m
				&& visit[x][y] == -1 && arr[x][y] == 1) {
				visit[x][y] = visit[a][b] + 1;
				q.push({ x, y });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) start = { i, j };
		}
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << visit[i][j] << ' ';
		cout << '\n';
	}
	
	return 0;
}