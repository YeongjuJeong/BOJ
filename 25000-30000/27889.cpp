// 27889 특별한 학교 이름

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;
    if (s[0] == 'N') cout << "North London Collegiate School\n";
    else if (s[0] == 'B') cout << "Branksome Hall Asia\n";
    else if (s[0] == 'K') cout << "Korea International School\n";
    else cout << "St. Johnsbury Academy\n";
    return 0;
}
