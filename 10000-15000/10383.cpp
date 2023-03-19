// 10383 The Cost of Moving

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int site = 1;
    while (1){
        int n; cin >> n;
        if (n == 0) break;
        vector<pair<string, int>> v;
        for (int i = 0; i < n; i++){
            string s; cin >> s;
            v.push_back({s, i});
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++){
            ans += abs(i - v[i].second);
        }
        cout << "Site " << site++ << ": " <<  ans << '\n';
    }

    return 0;
}
