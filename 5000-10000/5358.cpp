// 5358 Football Team

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    while (getline(cin, s)){
        int size = s.size();
        for (int i = 0; i < size; i++){
            if (s[i] == 'i') s[i] = 'e';
            else if (s[i] == 'e') s[i] = 'i';
            else if (s[i] == 'I') s[i] = 'E';
            else if (s[i] == 'E') s[i] = 'I';
        }
        cout << s << '\n';
    }
}
