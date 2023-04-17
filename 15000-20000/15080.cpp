// 15080 Every Second Counts

#include <iostream>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2; char c;
    cin >> h1 >> c >> m1 >> c >> s1;
    cin >> h2 >> c >> m2 >> c >> s2;
    int ans = 0;
    
    if (s1 > s2) { s2 += 60; m2--; }
    ans += s2 - s1;
    
    if (m1 > m2) { m2 += 60; h2--; }
    ans += 60 * (m2 - m1);
    
    if (h1 > h2) h2 += 24;
    ans += 60 * 60 * (h2 - h1);
    
    cout << ans;
    
    return 0;
}
