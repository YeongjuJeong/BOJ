// 28235 코드마스터 2023

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string s; cin >> s;
    if (!s.compare("SONGDO")) cout << "HIGHSCHOOL";
    else if (!s.compare("CODE")) cout << "MASTER";
    else if (!s.compare("2023")) cout << "0611";
    else cout << "CONTEST";
    
    return 0;
}
