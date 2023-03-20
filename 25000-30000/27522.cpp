// 27522 카트라이더: 드리프트

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, t;
    int score[8] = {10, 8, 6, 5, 4, 3, 2, 1};
    
    vector<pair<string, string>> v;
    for (int i = 0; i < 8; i++){
        cin >> s >> t;
        v.push_back({s, t});
    }
    
    sort(v.begin(), v.end());
    
    int sumR = 0, sumB = 0;
    for (int i = 0; i < 8; i++){
        if (!v[i].second.compare("R")) sumR += score[i];
        else sumB += score[i];
    }
    
    if (sumR > sumB) cout << "Red";
    else cout << "Blue";

    return 0;
}
