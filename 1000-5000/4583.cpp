#include <iostream>
#include <stack>
using namespace std;

void f(string s) {
    stack<char> t;
    for (auto c : s) {
        switch (c) {
        case 'b': t.push('d'); break;
        case 'd': t.push('b'); break;
        case 'p': t.push('q'); break;
        case 'q': t.push('p'); break;
        case 'i': case 'o': case 'v': case 'w': case 'x': t.push(c); break;
        default: cout << "INVALID\n"; return;
        }
    }
    while (!t.empty()) {
        cout << t.top();
        t.pop();
    }
    cout << '\n';
}

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;

    while (1) {
        cin >> s;
        if (s[0] == '#') break;
        f(s);
    }

    return 0;
}