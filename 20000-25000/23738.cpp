#include <iostream>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    string str; cin >> str;

    for (auto c : str) {
        switch(c) {
        case 'A': case 'K': case 'M': case 'O': case 'T': cout << (char)(c - 'A' + 'a'); break;
        case 'B': cout << "v"; break;
        case 'E': cout << "ye"; break; 
        case 'H': cout << "n"; break;
        case 'P': cout << "r"; break;
        case 'C': cout << "s"; break;
        case 'Y': cout << "u"; break;
        case 'X': cout << "h"; break;
        }
    }
    
    return 0;
}
