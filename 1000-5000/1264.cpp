// 1264 모음의 개수

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    while (1){
        getline(cin, s);
        if (!s.compare("#")) break;
        int size = s.size();
        int cnt = 0;
        for (int i = 0; i < size; i++){
            if (s[i] == 'A' || s[i] == 'a'
                || s[i] == 'E' || s[i] == 'e'
                || s[i] == 'I' || s[i] == 'i'
                || s[i] == 'O' || s[i] == 'o'
                || s[i] == 'U' || s[i] == 'u')
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
