// 5089 Travelling Salesman

#include <iostream>
#include <set>
using namespace std;

int main() {
    int t = 1;
    while (1){
        int n; cin >> n;
        if (!n) break;
        set<string> s;
        string str;
        cin.ignore();
        for (int i = 0; i < n; i++){
            getline(cin, str);
            s.insert(str);
        }
        cout << "Week " << t++ << ' ' << s.size() << '\n';
    }
    return 0;
}
