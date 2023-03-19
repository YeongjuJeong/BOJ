// 15129 Law 11

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int ball = x;
    
    vector<int> a, b;
    
    for (int i = 0; i < 11; i++){
        cin >> x >> y;
        a.push_back(x);
    }
    for (int i = 0; i < 11; i++){
        cin >> x >> y;
        b.push_back(x);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if (0 < a[10] && b[9] < a[10] && ball < a[10]) cout << "1\n";
    else cout << "0\n";
    
    return 0;
}
