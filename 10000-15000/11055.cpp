#include <iostream>
using namespace std;

int arr[1001], dp[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		dp[i] = arr[i];
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)
			if (arr[j] < arr[i]) dp[i] = max(dp[i], dp[j] + arr[i]);

	int ans = 0;
	for (int i = 0; i < n; i++) ans = max(ans, dp[i]);
	cout << ans << '\n';

	return 0;
}