#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    double d1, d2;
    cin >> d1 >> d2;

    double ans = d1 * 2 + 2 * 3.141592 * d2;
    cout << fixed << setprecision(6) << ans << '\n';
    
    return 0;
}