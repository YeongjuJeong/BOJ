#include <iostream>
#include <vector>
#include <queue>
#define MAX 100001
using namespace std;

int dx1[3] = { -1, 1, 0 };
int dx2[3] = { 1, 1, 2 };

int visit[MAX];
queue<int> q;

int n, k;

void bfs(int start) {
	int cur, next;
	q.push(start);
	while (!q.empty()) {
		cur = q.front();
		q.pop();

		if (cur == k) {
			cout << visit[cur] << '\n';
			return;
		}

		for (int i = 0; i < 3; i++) {
			next = cur * dx2[i] + dx1[i];
			if (0 <= next && next < MAX && !visit[next]) {
				visit[next] = visit[cur] + 1;
				q.push(next);
			}
		}
	}
}

int main() {
	cin >> n >> k;

	bfs(n);

	return 0;
}