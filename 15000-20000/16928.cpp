#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int a[101], visit[101];
queue<int> q;

void f(int k) {
	memset(visit, -1, sizeof(visit));

	int cur, next;

	q.push(k);
	visit[k] = 1;

	while (!q.empty()) {
		cur = q.front();
		q.pop();

		for (int i = 1; i <= 6 && cur + i <= 100; i++) {
			next = cur + i;
			if (a[next]) next = a[next];
			if (visit[next] == -1) {
				visit[next] = visit[cur] + 1;
				q.push(next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m, x, y;

	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		cin >> x >> y;
		a[x] = y;
	}

	f(1);

	cout << visit[100] - 1 << '\n';

	return 0;
}