// 27880 Gahui and Soongsil University station

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string s; int n, sum = 0;
    for (int i = 0; i < 4; i++){
        cin >> s >> n;
        if (!s.compare("Es")) sum += 21 * n;
        else sum += 17 * n;
    }
    cout << sum;

    return 0;
}
