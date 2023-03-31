// 11121 Communication Channels

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        string s, t;
        cin >> s >> t;
        if (!s.compare(t)) cout << "OK\n";
        else cout << "ERROR\n";
    }
    
    return 0;
}
