// 15051 Máquina de café

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int s1 = b * 2 + c * 4;
    int s2 = a * 2 + c * 2;
    int s3 = a * 4 + b * 2;
    cout << min(min(s1, s2), s3);
    return 0;
}
