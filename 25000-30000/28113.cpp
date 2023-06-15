// 28113 정보섬의 대중교통

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, a, b; cin >> n >> a >> b;
    if (n > b) cout << "Bus";
    else if (a == b) cout << "Anything";
    else if (a > b) cout << "Subway";
    else cout << "Bus";

    return 0;
}
