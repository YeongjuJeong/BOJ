// 6799 Computer Purchase

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool f(pair<int, string> &a, pair<int, string> &b){
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main() {
    int n; cin >> n;
    
    vector<pair<int, string>> v;
    
    string s; int a, b, c;
    for (int i = 0; i < n; i++){
        cin >> s >> a >> b >> c;
        v.push_back({2*a+3*b+c, s});
    }

    if (n == 1) cout << v[0].second << '\n';
    else if (n > 1) {
        sort(v.begin(), v.end(), f);
        cout << v[0].second << '\n' << v[1].second << '\n';
    }
    
    return 0;
}
