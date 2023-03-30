// 4470 줄번호

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    string s;
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin, s);
        cout << ++cnt << ". " << s << '\n';
    }
}
