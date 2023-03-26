// 4675 Word Amalgamation

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

multimap<string, string> mp;

int main() {
    string s, t;
    while (1){
        cin >> s;
        if (!s.compare("XXXXXX")) break;
        t = s;
        sort(s.begin(), s.end());
        mp.insert({s, t});
    }
    
    while (1){
        cin >> s;
        if (!s.compare("XXXXXX")) break;
        sort(s.begin(), s.end());
        if (mp.lower_bound(s) == mp.upper_bound(s)) {
            cout << "NOT A VALID WORD\n******\n";
            continue;
        }
        multimap<string, string>::iterator it;
        vector<string> v;
        for (it = mp.lower_bound(s); it != mp.upper_bound(s); it++){
            v.push_back(it->second);
        }
        sort(v.begin(), v.end());
        for (auto s : v){
            cout << s << '\n';
        }
        cout <<  "******\n";
    }

    return 0;
}
