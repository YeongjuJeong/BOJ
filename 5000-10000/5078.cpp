// 5078 Shirts

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool f(string &a, string &b){
    if (a[0] == b[0]) return a[1] < b[1];
    return a[0] > b[0];
}

int main() {
    int w, h;
    while (1){
        cin >> w;
        if (!w) break;
        string s;
        vector<string> v;
        for (int i = 0; i < w; i++){
            cin >> s;
            v.push_back(s);
        }
        cin >> h;
        for (int i = 0; i < h; i++){
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end(), f);
        for (auto c : v){
            cout << c << ' ';
        }
    }

    return 0;
}
