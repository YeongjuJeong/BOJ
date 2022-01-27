#include <iostream>
using namespace std;

int arr[1000001];

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, cnt = 0; cin >> n;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		arr[x]++;
	}
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		if (arr[x] > 0) arr[x]--;
		else cnt++;
	}

	cout << cnt << '\n';

	return 0;
}