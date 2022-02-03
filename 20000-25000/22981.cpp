#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define MAX 1e18
using namespace std;

vector<long double> v;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long n, k, sum = 0; cin >> n >> k;

    for (int i = 0, x; i < n; i++) {
        cin >> x;
        sum += x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    long double left = v[0], right = sum;
    long long leftn = 0, rightn = n;

    long long minsum = MAX;

    for (int i = 1; i < n; i++) {
        leftn++;
        right = v[i];
        rightn--;

        long long sum = ceil(k / (left * leftn + right * rightn));
        minsum = min(minsum, sum);
    }

    cout << minsum << '\n';

    return 0;
}