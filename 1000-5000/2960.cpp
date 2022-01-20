// 2960 에라토스테네스의 체

#include <iostream>
using namespace std;

int arr[1001];

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k, cnt = 0; cin >> n >> k;

	for (int i = 2; i <= n; i++) {
		if (!arr[i]) {
			for (int j = 1; i * j <= n; j++) {
				if (!arr[i * j]) {
					arr[i * j] = 1;
					if (++cnt == k) {
						cout << i * j << '\n';
						return 0;
					}
				}
			}
		}
	}

	return 0;
}