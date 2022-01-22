#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	while (scanf("%lf %lf", &a, &b) != EOF) {
		cout << fixed << setprecision(2) << a / b << '\n';
	}

	return 0;
}