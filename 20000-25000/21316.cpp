#include <iostream>
#include <vector>
using namespace std;

vector<int> v[13];

int check(int n) {
	int arr[4] = { 0, };
	for (int i = 0; i < 3; i++) arr[v[v[n][i]].size()] = 1;
	for (int i = 1; i <= 3; i++) {
		if (!arr[i]) return 0;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0, a, b; i < 12; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int ans = 0;
	for (int i = 1; i <= 12; i++) {
		if (v[i].size() == 3 && check(i)) ans = i;
	}

	cout << ans << '\n';
	
	return 0;
}