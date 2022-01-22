// 6588 골드바흐의 추측
// 26번째 줄에서 조건을 i > n / 2로 설정하여
// 6 = 3 + 3 처럼 같은 소수의 합으로 나타내어지는 경우에 잘못된 답이 나왔다.

#include <iostream>
#define MAX 1000001
using namespace std;

int arr[MAX];

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;

	arr[1] = 1;
	for (int i = 2; i < MAX; i++) {
		if (arr[i]) continue;
		for (int j = i + i; j < MAX; j += i) arr[j] = 1;
	}
	
	while (1) {
		cin >> n;
		if (!n) break;
		for (int i = n - 3; i >= n / 2; i -= 2) {
			if (!arr[i] && !arr[n - i]) {
				cout << n << " = " << n - i << " + " << i << '\n';
				n = 0;
				break;
			}
		}
		if (n) cout << "Goldbach's conjecture is wrong.\n";
	}

	return 0;
}