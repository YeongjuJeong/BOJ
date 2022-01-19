#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 9999999999999
using namespace std;

char arr[1002][1002];
int n, m;
priority_queue<pair<long long, pair<int, int>>> pq;
long long cost[1002][1002];

void bfs(int i, int j) {
	// cost 배열의 값을 전부 무한대 값으로 초기화
	for (int i = 0; i < n; i++) fill(cost[i], cost[i] + m, INF);

	pq.push({ 0, { i, j } });
	cost[i][j] = 0;

	int x, y;
	long long z;
	while (!pq.empty()) {
		z = -pq.top().first;
		x = pq.top().second.first;
		y = pq.top().second.second;
		pq.pop();

		if (z > cost[x][y]) continue;

		// 고양이가 위치한 곳에 사다리 존재
		if (arr[x][y] == 'L') {
			if (0 <= x - 1 && arr[x - 1][y] != 'D' && z + 5 < cost[x - 1][y]) {
				cost[x - 1][y] = z + 5;
				pq.push({ -(z + 5), { x - 1, y } });
			}
		}

		// 고양이가 위치한 곳이 아래가 뚫려 있는 공간
		if (arr[x][y] == 'X') {
			int k = x;
			while (arr[k][y] == 'X') { k++; }
			if (k < n && arr[k][y] != 'D' && z + 10 < cost[k][y]) {
				cost[k][y] = z + 10;
				pq.push({ -(z + 10), { k, y } });
			}
		}

		// 고양이가 위치한 곳이 아래가 뚫려 있는 공간이 아닐 때
		else {
			// 고양이가 위치한 곳의 아래 칸에 사다리가 존재
			if (x + 1 < n && arr[x + 1][y] == 'L' && z + 5 < cost[x + 1][y]) {
				cost[x + 1][y] = z + 5;
				pq.push({ -(z + 5), { x + 1, y } });
			}

			// 좌로 한 칸 이동
			if (0 <= y - 1 && arr[x][y - 1] != 'D' && z + 1 < cost[x][y - 1]) {
				cost[x][y - 1] = z + 1;
				pq.push({ -(z + 1), { x, y - 1 } });
			}

			// 우로 한 칸 이동
			if (y + 1 < m && arr[x][y + 1] != 'D' && z + 1 < cost[x][y + 1]) {
				cost[x][y + 1] = z + 1;
				pq.push({ -(z + 1), { x, y + 1 } });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];

	pair<int, int> st, en;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 'C') st = { i, j };
			if (arr[i][j] == 'E') en = { i, j };
		}
	}

	bfs(st.first, st.second);

	if (cost[en.first][en.second] == INF) cout << "dodo sad\n";
	else cout << cost[en.first][en.second] << '\n';

	return 0;
}