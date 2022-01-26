#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c, d, p, x, y;
    cin >> a >> b >> c >> d >> p;

    x = a * p;
    if (p < c) y = b;
    else y = b + (p - c) * d;

    cout << min(x, y) << '\n';
    
    return 0;
}