// 5717 상근이의 친구들

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (1){
        int a, b; cin >> a >> b;
        if (!a && !b) break;
        cout << a + b << '\n';
    }
    return 0;
}
