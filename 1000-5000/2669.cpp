#include <iostream>
using namespace std;

int arr[101][101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int x1, y1, x2, y2;

	for (int k = 0; k < 4; k++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i < x2; i++) 
			for (int j = y1; j < y2; j++)
				arr[i][j] = 1;
	}

	int cnt = 0;
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
			if (arr[i][j] == 1) cnt++;

	cout << cnt << '\n';

	return 0;
}