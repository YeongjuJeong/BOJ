// 27433 팩토리얼 2

#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll n; cin >> n;
    ll sum = 1;
    for (ll i = n; i >= 1; i--){
        sum *= i;
    }
    
    cout << sum;
    
    return 0;
}
