// 25304 영수증

#include <iostream>
using namespace std;

int main() {
    int x; cin >> x;
    int n; cin >> n;
    int a, b, sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        sum += a*b;
    }
    if (x == sum) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
