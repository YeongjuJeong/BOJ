#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> v;
int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        string t;
        for (int j = i; j < s.size(); j++) t.push_back(s[j]);
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    for (auto str : v) cout << str << '\n';
    return 0;
}