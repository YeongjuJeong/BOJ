// 11608 Complexity
// alpha 배열을 초기화 안 해줘서 틀렸습니다 많이 본 문제..

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int alpha[26] = {0};
    
    cin >> str;
    
    for (auto c : str) { alpha[c-'a']++; }
    
    sort(alpha, alpha + 26);
    
    int sum = 0;
    for (int i = 0; i < 24; i++) { sum += alpha[i]; }
    
    cout << sum;

    return 0;
}
