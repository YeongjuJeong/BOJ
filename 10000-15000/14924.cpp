#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int s, t, d, ans;
    cin >> s >> t >> d;

    ans = d / (s * 2) * t;
    cout << ans << '\n';
    
    return 0;
}