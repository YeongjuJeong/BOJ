// 26310 Finalists

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<pair<string, double>> v;

bool f(pair<string, double> &a, pair<string, double> &b){
    return a.second > b.second;
}

int main() {
    int n;
    string s;
    double pt, pu, rt, ru, ff;
    // n: the number of World Finals slots
    // s: a country hosting a regional contest
    // pt: the number of teams in the preliminary contests
    // pu: the number of universities in the preliminary contests
    // rt: the number of teams in the regional contest
    // ru: the number of universities in the regional contests
    // f: the number of foreign teams in the regional
    cin >> n;
    for (int i = 0; i < 6; i++){
        cin >> s >> pt >> pu >> rt >> ru >> ff;
        // ss: site score
        double ss = 0.56 * ru
                + 0.24 * rt
                + 0.14 * pu
                + 0.06 * pt
                + 0.3 * ff;
        v.push_back({s, ss});
    }
    
    sort(v.begin(), v.end(), f);
    
    // print
    for (int i = 0; i < 6; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    
    int a = n / 6; // 몫
    int b = n % 6; // 나머지
    
    int ans = 0;
    for (int i = 0; i < 6; i++){
        if (!v[i].first.compare("Taiwan")){
            ans = a;
            if (i < b) ans++;
            break;
        }
    }
    
    cout << ans;

    return 0;
}
