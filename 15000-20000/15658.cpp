#include <iostream>
#include <vector>
using namespace std;

int n, ans_min = 2000000000, ans_max = -2000000000;
int arr[101];

void func(int cnt, int res, int op[4]) {
	if (cnt == n) {
		ans_min = min(ans_min, res);
		ans_max = max(ans_max, res);
		return;
	}

	int tmp;
	for (int i = 0; i < 4; i++) {
		if (op[i] == 0) continue;

		if (i == 0) tmp = res + arr[cnt];
		else if (i == 1) tmp = res - arr[cnt];
		else if (i == 2) tmp = res * arr[cnt];
		else tmp = res / arr[cnt];

		op[i]--;
		func(cnt + 1, tmp, op);
		op[i]++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	
	for (int i = 0; i < n; i++) cin >> arr[i];

	int op[4] = { 0, };
	for (int i = 0; i < 4; i++) cin >> op[i];

	func(1, arr[0], op);

	cout << ans_max << '\n' << ans_min << '\n';

	return 0;
}