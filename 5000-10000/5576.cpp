// 5576 콘테스트

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[10], b[10];
    
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++) cin >> b[i];
    
    sort(a, a + 10); sort(b, b + 10);
    
    cout << a[7] + a[8] + a[9] << ' '
        << b[7] + b[8] + b[9] << '\n';

    return 0;
}
