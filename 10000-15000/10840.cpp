#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long p[26];
string s, t;
vector<long long> v;

void clearp() {
    p[0] = 1;
    for (int i = 1; i < 26; i++) p[i] = p[i - 1] * 1501;
}

int f(int size) {
    int ss = s.size(), ts = t.size();
    v.clear();

    for (int i = 0; i <= ss - size; i++) {
        long long h = 0;
        for (int j = i; j < i + size; j++)
            h = h + p[s[j] - 'a'];
        v.push_back(h);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i <= ts - size; i++) {
        long long h = 0;
        for (int j = i; j < i + size; j++)
            h = h + p[t[j] - 'a'];
        if (binary_search(v.begin(), v.end(), h)) return 1;
    }

    return 0;
}

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> s >> t;
    int size = min(s.size(), t.size());

    clearp();
    for (int i = size; i > 0; i--) { // i : 부분 문자열의 길이
        if (f(i)) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << "0\n";

    return 0;
}