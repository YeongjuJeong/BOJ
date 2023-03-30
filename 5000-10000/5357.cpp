// 5357 Dedupe

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        int size = s.size();
        char c = 'c';
        for (int j = 0; j < size; j++){
            if (s[j] != c) {
                cout << s[j];
                c = s[j];
            }
        }
        cout << '\n';
    }
}
