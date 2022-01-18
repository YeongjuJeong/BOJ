#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[128][128];
int white = 0, blue = 0;

bool color(int x, int y, int n) {
	if (n == 1) {
		if (arr[x][y]) blue++;
		else white++;
		return true;
	}

	int w = 0, b = 0;
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[i][j]) b++;
			else w++;
		}
	}

	if (!b) { white++; return true; }
	if (!w) { blue++; return true; }
	return false;

}

void binarysearch(int x, int y, int n) {
	if (color(x, y, n)) return;
	binarysearch(x, y, n / 2);
	binarysearch(x, y + n / 2, n / 2);
	binarysearch(x + n / 2, y, n / 2);
	binarysearch(x + n / 2, y + n / 2, n / 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> arr[i][j];

	binarysearch(0, 0, n);

	cout << white << '\n' << blue << '\n';

	return 0;
}