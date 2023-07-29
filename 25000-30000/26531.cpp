// 26531 Simple Sum

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    char ch;
    int a, b, c;
    cin >> ch;
    a = ch - '0';
    cin >> ch >> ch;
    b = ch - '0';
    cin >> ch >> ch;
    c = ch - '0';
    if (a + b == c) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}
