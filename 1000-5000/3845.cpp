// 3845 잔디깎기
// 깎는 부분이 겹쳐도 되는데 그 부분을 생각못해서 계속 틀림..

#include <iostream>
#include <vector>
#include <algorithm>
#define ld long double
using namespace std;

int main() {
    while (1){
        // length 100 width 75
        int nx, ny;
        ld w;
        cin >> nx >> ny >> w;
        if (!nx && !ny && !w) break;
        ld xi, yi;
        vector<ld> vx, vy;
        for (int i = 0; i < nx; i++){
            cin >> xi;
            vx.push_back(xi);
        }
        for (int i = 0; i < ny; i++){
            cin >> yi;
            vy.push_back(yi);
        }
        sort(vx.begin(), vx.end()); sort(vy.begin(), vy.end());
        
        ld stx = vx[0], sty = vy[0];
        int ans = 1;
        
        if ((0 < stx - w / 2) || (0 < sty - w / 2)) ans = 0;
    
        for (int i = 1; i < nx; i++){
            if (stx + w < vx[i]) {
                ans = 0; break;
            }
            stx = vx[i];
        }
        for (int i = 1; i < ny; i++){
            if (sty + w < vy[i]) {
                ans = 0; break;
            }
            sty = vy[i];
        }
        
        if ((stx + w / 2 < 75) || (sty + w / 2 < 100)) ans = 0;
        
        if (ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
