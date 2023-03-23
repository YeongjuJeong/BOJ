// 25238 가희와 방어율 무시

#include <iostream>

using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    double result = a * ((100 - b) / 100);
    if (result >= 100) cout << "0\n";
    else cout << "1\n";

    return 0;
}
