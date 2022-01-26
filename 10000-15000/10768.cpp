#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int m, d;
    cin >> m >> d;

    if (m == 2) {
        if (d == 18) cout << "Special\n";
        else if (d < 18) cout << "Before\n";
        else cout << "After\n";
    }
    else if (m < 2) cout << "Before\n";
    else cout << "After\n";
    
    return 0;
}