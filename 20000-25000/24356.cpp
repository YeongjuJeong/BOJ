// 24356 ЧАСОВНИК

#include <iostream>
using namespace std;

int main() {
    int t1, m1, t2, m2, m, t = 0;
    cin >> t1 >> m1 >> t2 >> m2;
    
    m = m2 - m1;
    if (m < 0) {
        m += 60;
        t--;
    }
    t += t2 - t1;
    if (t < 0) t += 24;
    
    int sum = t * 60 + m;
    cout << sum << ' ' << sum / 30;
    
    
    return 0;
}
