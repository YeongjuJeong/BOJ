#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << min(a + d, b + c) << '\n';

    return 0;
}