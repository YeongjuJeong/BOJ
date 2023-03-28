// 18409 母音を数える (Counting Vowels)

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for (auto i : s){
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') cnt++;
    }
    cout << cnt << '\n';

    return 0;
}
