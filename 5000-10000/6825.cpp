// 6825 Body Mass Index

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double h, w; cin >> w >> h;
    double bmi = w / (h * h);
    if (25 < bmi) cout << "Overweight\n";
    else if (18.5 <= bmi && bmi <= 25) cout << "Normal weight\n";
    else cout << "Underweight\n";
    
    return 0;
}
