// 27386 Class Field Trip

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string str = s1 + s2;
    
    sort(str.begin(), str.end());
    
    cout << str << '\n';

    return 0;
}
