// 5602 問題1

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool f(pair<int, int> &a, pair<int, int> &b){
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main() {
    int n, m;
    // the number of students : n
    // the number of places : m
    cin >> n >> m;
    
    vector<pair<int, int>> v;
    
    for (int i = 0; i < m; i++){
        v.push_back({0, i});
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int x; cin >> x;
            if (x) v[j].first++;
        }
    }
    
    sort(v.begin(), v.end(), f);
    
    for (int i = 0; i < m; i++){
        cout << v[i].second + 1 << ' ';
    }

    return 0;
}
