// 20833 Kuber

#include <iostream>
using namespace std;

int main() {
    long long n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum += i * i * i;
    }
    cout << sum;
    return 0;
}
