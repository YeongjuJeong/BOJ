#include <iostream>
#include <map>
#define MAX 2188
using namespace std;

int arr[MAX][MAX];

map<int, int> ans;

int N;

void f(int x, int y, int n) {
	if (n == 1) {
		ans[arr[x][y]]++;
		return;
	}

	map<int, int> tmp;

	for (int i = x; i < x + n; i++)
		for (int j = y; j < y + n; j++)
			tmp[arr[i][j]]++;

	if (!tmp[0] && !tmp[1]) { ans[-1]++; return; }
	else if (!tmp[-1] && !tmp[1]) { ans[0]++; return; }
	else if (!tmp[-1] && !tmp[0]) { ans[1]++; return; }

	for (int i = x; i < x + n; i += n / 3)
		for (int j = y; j < y + n; j += n / 3)
			f(i, j, n / 3);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> arr[i][j];

	f(0, 0, N);

	cout << ans[-1] << '\n' << ans[0] << '\n' << ans[1] << '\n';
 
	return 0;
}