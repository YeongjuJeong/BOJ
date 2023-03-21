// 7386 Ancient Cipher

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    string a, b;
    int arra[26] = {0}, arrb[26] = {0};
    cin >> a >> b;
    int len = a.length();
    for (int i = 0; i < len; i++){
        arra[a[i] - 'A']++;
        arrb[b[i] - 'A']++;
    }
    
    sort(arra, arra + 26);
    sort(arrb, arrb + 26);
    
    int mark = 0;
    for (int i = 0; i < 26; i++){
        if (arra[i] != arrb[i]){
            mark = 1;
            break;
        }
    }
    
    if (mark) cout << "NO";
    else cout << "YES";

    return 0;
}
