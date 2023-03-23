// 2204 도비의 난독증 테스트

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool f(string s, string t){
    int size = min(s.size(), t.size());
    for (int i = 0; i < size; i++){
        char a = s[i], b = t[i];
        if ('A' <= a && a <= 'Z') a += 32;
        if ('A' <= b && b <= 'Z') b += 32;
        if (a != b) { return a < b; }
    }
    return s.size() < t.size();
}

int main(){
    while (1){
        int n; cin >> n;
        if (!n) break;
        vector<string> v;
        string s;
        for (int i = 0; i < n; i++){
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end(), f);
        cout << v[0] << '\n';
    }

    return 0;
}
