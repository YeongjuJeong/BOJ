#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1000000001
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

vector<pair<long long, pair<int, int>>> v[1001][1001];
long long arr[1001][1001], d[1001][1001], m[1001][1001];

queue<pair<int, int>> q;
priority_queue<pair<pair<int, int>, long long>,
    vector<pair<pair<int, int>, long long>>,
    greater<pair<pair<int, int>, long long>>> pq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            d[i][j] = INF;
        }
    }

    d[0][0] = 0;
    pq.push({ {0, 0}, 0 });

    int x, y, a, b;
    long long z, c;
    while (!pq.empty()) {
        x = pq.top().first.first;
        y = pq.top().first.second;
        z = pq.top().second;
        pq.pop();

        if (z > d[x][y]) continue;

        for (int k = 0; k < 4; k++) {
            a = x + dx[k];
            b = y + dy[k];
            c = max(z, abs(arr[a][b] - arr[x][y]));

            if (0 <= a && a < n && 0 <= b && b < n
                && d[a][b] > c) {
                d[a][b] = c;
                pq.push({ {a, b}, c });
            }
        }
    }

    cout << d[n - 1][n - 1] << '\n';

    return 0;
}