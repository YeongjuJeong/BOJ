// 25773 Number Maximization

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    sort(s.begin(), s.end(), greater<>());
    
    cout << s << '\n';
    
    return 0;
}
