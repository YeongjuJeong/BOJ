#include <iostream>
#include <cstring>
using namespace std;

long long n, t;
long long arr[6][6], ans[6][6], tmp[6][6];

void calc(long long a[6][6], long long b[6][6]) {
	memset(tmp, 0, sizeof(tmp));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				tmp[i][j] = (tmp[i][j] + a[i][k] * b[k][j]) % 1000;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = tmp[i][j];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> t;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++) ans[i][i] = 1;
	while (t) {
		if (t % 2) calc(ans, arr);
		calc(arr, arr);
		t /= 2;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << ans[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}