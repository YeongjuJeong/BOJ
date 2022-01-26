#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    double d, h, w;
    cin >> d >> h >> w;

    double x = sqrt((d * d) / (h * h + w * w));
    cout << (int)(h * x) << ' ' << (int)(w * x) << '\n';

    return 0;
}