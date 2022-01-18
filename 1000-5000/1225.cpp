#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	int al = a.size();
	int bl = b.size();

	long long sum = 0;

	for (int i = 0; i < al; i++)
		for (int j = 0; j < bl; j++)
			sum += (a[i] - '0') * (b[j] - '0');

	cout << sum << '\n';

	return 0;
}