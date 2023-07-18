// 27541 末尾の文字 (Last Letter)

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n; string s; cin >> n; cin >> s;
    for (int i = 0; i < n - 1; i++) { cout << s[i]; }
    if (s[n - 1] != 'G') cout << s[n - 1] << "G";

    return 0;
}
