// 27262 Лифт

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k, a, b; cin >> n >> k >> a >> b;
    cout << b * (k + n - 2) << ' ' << a * (n - 1);

    return 0;
}
