#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001], dp[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) cin >> arr[i];

	fill(dp, dp + n + 1, 1);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j < i; j++)
			if (arr[j] < arr[i]) dp[i] = max(dp[i], dp[j] + 1);

	int ans = 0;
	for (int i = 1; i <= n; i++) ans = max(ans, dp[i]);

	cout << ans << '\n';

	return 0;
}