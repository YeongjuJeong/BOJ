// 3733 Shares

#include <iostream>

using namespace std;

int main() {
    while(1){
        int n, m;
        if(scanf("%d%d", &n, &m) == EOF) return 0;
        int x = m / (n + 1);
        cout << x << '\n';
    }
    return 0;
}
