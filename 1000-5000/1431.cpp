// 1431 시리얼 번호

#include <iostream>
#include <algorithm>
using namespace std;

string arr[51];

bool f(string s1, string s2) {
	if (s1.length() != s2.length()) return s1.length() < s2.length();

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < s1.length(); i++) {
		if (isdigit(s1[i])) sum1 += s1[i] - '0';
		if (isdigit(s2[i])) sum2 += s2[i] - '0';
	}
	if (sum1 != sum2) return sum1 < sum2;

	return s1 < s2;
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr, arr + n, f);

	for (int i = 0; i < n; i++) cout << arr[i] << '\n';

	return 0;
}