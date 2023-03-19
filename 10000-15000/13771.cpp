// 13771 Presents
// 처음에 double형을 쓰다가 너무 찝찝하다 했는데
// 역시 틀렸습니다를 받고 안전한 정수형으로 했더니 맞았다!

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int a, b;
        scanf("%d.%d", &a, &b);
        v.push_back({a, b});
    }
    
    sort(v.begin(), v.end());
    
    cout << v[1].first << "." << v[1].second << '\n';
    
    return 0;
}
