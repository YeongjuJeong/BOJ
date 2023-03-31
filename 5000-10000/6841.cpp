// 6841 I Speak TXTMSG
// '를 ’로 안 써서 틀림

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (1){
        string s; cin >> s;
        if (!s.compare("CU")) cout << "see you\n";
        else if (!s.compare(":-)")) cout << "I’m happy\n";
        else if (!s.compare(":-(")) cout << "I’m unhappy\n";
        else if (!s.compare(";-)")) cout << "wink\n";
        else if (!s.compare(":-P")) cout << "stick out my tongue\n";
        else if (!s.compare("(~.~)")) cout << "sleepy\n";
        else if (!s.compare("TA")) cout << "totally awesome\n";
        else if (!s.compare("CCC")) cout << "Canadian Computing Competition\n";
        else if (!s.compare("CUZ")) cout << "because\n";
        else if (!s.compare("TY")) cout << "thank-you\n";
        else if (!s.compare("YW")) cout << "you’re welcome\n";
        else if (!s.compare("TTYL")) {
            cout << "talk to you later\n";
            break;
        }
        else cout << s << '\n';
    }
    return 0;
}
