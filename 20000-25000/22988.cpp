#include <iostream>
#include <set>
using namespace std;

multiset<long double> s;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long n;
    long double x;
    cin >> n >> x;
    long double half = x / 2;

    long double a, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a >= x) ans++;
        else s.insert(a);
    }

    while (s.size() > 1) {
        long double sum = *s.begin() + *s.rbegin();
        if (sum >= half) {
            ans++;
            s.erase(s.begin());
            s.erase(--s.end());
        }
        else {
            sum = *s.begin();
            s.erase(s.begin());
            sum += *s.begin();
            s.erase(s.begin());
            s.insert(sum + half);
        }
    }

    cout << ans << '\n';

    return 0;
}