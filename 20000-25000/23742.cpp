#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> m;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(NULL);

    long long sum = 0, msum = 0, cnt = 0, ans = 0;

    int n; cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x < 0) {
            m.push_back(x);
            msum += x;
        }
        else {
            sum += x;
            cnt++;
        }
    }

    sort(m.begin(), m.end(), greater<>());

    for (int i = 0; i < m.size(); i++) {
        if (sum * cnt + m[i] > (sum + m[i]) * (cnt + 1)) break;
        sum += m[i];
        cnt++;
        msum -= m[i];
    }

    cout << msum + sum * cnt << '\n';
    
    return 0;
}
