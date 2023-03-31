// 8718 Bałwanek

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n, k1; cin >> n >> k1;
    long long k2, k3, sum;
    n *= 1000; k1 *= 1000;
    // k가 제일 작은 공일 때
    k2 = 2 * k1;
    k3 = 2 * k2;
    sum = k1 + k2 + k3;
    if (sum <= n){
        cout << sum << '\n';
        return 0;
    }
    // k가 중간 크기 공일 때
    k2 = k1 / 2;
    k3 = 2 * k1;
    sum = k1 + k2 + k3;
    if (sum <= n){
        cout << sum << '\n';
        return 0;
    }
    // k가 제일 큰 공일 때
    k2 = k1 / 2;
    k3 = k2 / 2;
    sum = k1 + k2 + k3;
    if (sum <= n){
        cout << sum << '\n';
        return 0;
    }
    
    cout << "0\n";
    return 0;
}
