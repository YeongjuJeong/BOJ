// 4070 Mahershalalhashbaz, Nebuchadnezzar, and Billy Bob Benjamin Go to the Regionals
// 출력 형식에서 줄바꿈을 한번더 안해서 틀렸던 문제

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t = 0;
    while(1){
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        vector<int> v;
        string s;
        for (int i = 0; i < a; i++){
            cin >> s;
            v.push_back(s.size());
        }
        
        sort(v.begin(), v.end());
        
        int mark = 0;
        for (int i = 0; i < a/b; i++){
            double sum = 0;
            for (int j = 0; j < b; j++){
                sum += v[i*b+j];
            }
            double ave = sum / b;
            for (int j = 0; j < b; j++){
                if (abs(ave - v[i*b+j]) > 2) mark = 1;
            }
            if (mark) break;
        }
        
        cout << "Case " << ++t << ": ";
        if (mark) cout << "no\n\n";
        else cout << "yes\n\n";
        
    }

    return 0;
}
