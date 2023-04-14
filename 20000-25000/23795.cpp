// 23795 사장님 도박은 재미로 하셔야 합니다

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    while (1){
        cin >> n;
        if (n == -1) break;
        sum += n;
    }
    cout << sum;
    
    return 0;
}
