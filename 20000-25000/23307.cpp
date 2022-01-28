#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1252][1252];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

char dirchar[4] = { 'D', 'R', 'U', 'L' };

typedef struct point {
	int x, y, l;
	char dir1, dir2;
	point(int x, int y, int l, char dir1, char dir2) {
		this->x = x;
		this->y = y;
		this->l = l;
		this->dir1 = dir1;
		this->dir2 = dir2;
	}
	bool operator<(point p) {
		if (x == p.x) return y < p.y;
		return x < p.x;
	}
};

vector<point> v;

int alone(int i, int j) {
	int cnt = 0;
	for (int k = 0; k < 4; k++)
		if (arr[i + dx[k]][j + dy[k]]) cnt++;
	if (cnt == 1) return 1;
	else return 0;
}

int getDir(int i, int j, int d) {
	for (int k = 0; k < 4; k++) {
		if (arr[i + dx[k]][j + dy[k]] && d != k) return k;
	}
}

void getLength(int i, int j) {
	int idx = 1;
	int dir1 = getDir(i, j, -1);
	while (1) {
		int x = i + dx[dir1] * idx;
		int y = j + dy[dir1] * idx;

		if (!arr[x][y]) break;
		idx++;
	}

	if (idx == 3) return;

	pair<int, int> mid = { i + dx[dir1] * (idx - 1), j + dy[dir1] * (idx - 1) };
	int dir2 = getDir(mid.first, mid.second, (dir1 + 2) % 4);

	int x = 0, y = 0;
	switch (dir1) {
	case 0: x = i - (idx - 1) / 2; break;
	case 1: y = j - (idx - 1) / 2; break;
	case 2: x = i + (idx - 1) / 2; break;
	case 3: y = j + (idx - 1) / 2; break;
	}

	switch (dir2) {
	case 0: x = i - (idx - 1) / 2; break;
	case 1: y = j - (idx - 1) / 2; break;
	case 2: x = i + (idx - 1) / 2; break;
	case 3: y = j + (idx - 1) / 2; break;
	}
	
	v.push_back(point(x, y, idx, dirchar[dir1], dirchar[dir2]));
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;

	char c;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> c;
			if (c == '#') arr[i][j] = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] && alone(i, j))
				getLength(i, j);
		}
	}

	sort(v.begin(), v.end());

	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); i++) {
		point p = v[i];
		cout << p.x << ' ' << p.y << ' ' << p.l << ' ' << p.dir1 << p.dir2 << '\n';
	}

	return 0;
}
