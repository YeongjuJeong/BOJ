#include <iostream>
using namespace std;

int nums[100001], dp[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, ans = 0;
	cin >> n;

	for (int i = 1; i * i <= n; i++)
		dp[i * i] = 1;

	if (dp[n]) {
		cout << "1\n";
		exit(0);
	}

	for (int i = 1; i <= n; i++) {
		if (dp[i]) continue;
		for (int j = 1; i - j * j > 0; j++) {
			if (!dp[i]) dp[i] = dp[i - j * j] + 1;
			else dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}

	cout << dp[n] << '\n';

	return 0;
}