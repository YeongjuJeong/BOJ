// 23739 벼락치기

#include <iostream>
using namespace std;

int arr[101];

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, t = 30, cnt = 0; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		if (t > arr[i]) {
			t -= arr[i];
			if (t == 0) t = 30;
			cnt++;
		}
		else {
			if (t >= (arr[i] + 1) / 2) cnt++;
			t = 30;
		}
	}

	cout << cnt << '\n';
	
	return 0;
}