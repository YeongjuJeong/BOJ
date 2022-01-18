#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n;

	for (int i = 0, x; i < n; i++) { cin >> x; v.push_back(x); }

	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0, x; i < m; i++) {
		cin >> x;
		cout << upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x) << ' ';
	}
	cout << "\n";

	return 0;
}