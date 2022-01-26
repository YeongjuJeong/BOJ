#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int b_year, b_month, b_date, n_year, n_month, n_date, a, b, c;
	cin >> b_year >> b_month >> b_date >> n_year >> n_month >> n_date;

	if (b_month < n_month || (b_month == n_month && b_date <= n_date))
		a = n_year - b_year;
	else a = n_year - b_year - 1;

	b = n_year - b_year + 1;
	c = n_year - b_year;

	cout << a << '\n' << b << '\n' << c << '\n';

	return 0;
}