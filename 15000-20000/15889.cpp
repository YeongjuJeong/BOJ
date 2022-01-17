#include <iostream>
using namespace std;
int coord[30001];
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);
    int n, dist, max_dist = 0; cin >> n;
    for (int i = 0; i < n; i++) cin >> coord[i];
    for (int i = 1; i < n; i++) {
        cin >> dist;
        max_dist = max(max_dist, coord[i - 1] + dist);
        if (max_dist < coord[i]) { cout << "엄마 나 전역 늦어질 것 같아\n"; exit(0); }
    }
    cout << "권병장님, 중대장님이 찾으십니다\n";
    return 0;
}