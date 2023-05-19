// 25191 치킨댄스를 추는 곰곰이를 본 임스

#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n, a / 2 + b);
    
    return 0;
}
