// 8664 Kwadrat
// 처음에 축과 평행하다는 말을 못봐서 틀렸다가 한번 갈아엎고
// 각 변의 길이가 같다는 기본적인 조건을 안 넣어서 틀리고
// 각 변의 길이가 0이 되면 안 된다는 조건을 안 넣어서 또 틀리고..
// 그래도 내가 해냄

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#define ll long long
using namespace std;

vector<pair<ll, ll>> v;
int main() {
    ll a, b;
    for (int i = 0; i < 4; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    
    if ((v[0].first == v[1].first)
        && (v[0].first != v[2].first)
        && (v[2].first == v[3].first)
        && (v[0].second == v[2].second)
        && (v[0].second != v[1].second)
        && (v[1].second == v[3].second)
        && (abs(v[0].first - v[2].first) != 0)
        && (abs(v[0].first - v[2].first) == abs(v[0].second - v[1].second))) {
        cout << "TAK\n";
    }
    else cout << "NIE\n";
    
    return 0;
}
