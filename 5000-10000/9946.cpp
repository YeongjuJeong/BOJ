// 9946 단어 퍼즐

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string s1, s2;
    int cnt = 1;
    while (1){
        cin >> s1 >> s2;
        if (!s1.compare("END") && !s2.compare("END")) break;
        
        int alpha1[26] = {0}, alpha2[26] = {0};
        int mrk = 0, size1 = s1.size(), size2 = s2.size();
        for (int i = 0; i < size1; i++){
            alpha1[s1[i] - 'a']++;
        }
        for (int i = 0; i < size2; i++){
            alpha2[s2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (alpha1[i] != alpha2[i]) {
                mrk = 1; break;
            }
        }
        cout << "Case " << cnt++ << ": "
            << (mrk ? "different\n" : "same\n");
    }
    
    return 0;
}
