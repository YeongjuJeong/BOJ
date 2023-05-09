// ﻿24183 Affischutskicket

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double a, b, c;
    cin >> a >> b >> c;
    
    long double c4 = 0.229*0.324*2*a;
    long double a3 = 0.297*0.420*2*b;
    long double a4 = 0.210*0.297*c;
    
    cout << fixed << setprecision(6) << c4 + a3 + a4;

    return 0;
}
