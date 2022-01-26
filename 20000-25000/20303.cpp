#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

long long n, m, k;

vector<long long> v[30001];
vector<pair<long long, long long>> t;
long long arr[30001], visit[30001], dp[30001], tmp[30001];
queue<long long> q;

pair<long long, long long> bfs(long long i) {
    long long cnt = 0, sum = 0;
    
    q.push(i);
    visit[i] = 1;

    while (!q.empty()) {
        long long cur = q.front();
        q.pop();

        sum += arr[cur];
        cnt++;

        for (int k = 0; k < v[cur].size(); k++) {
            long long next = v[cur][k];
            if (!visit[next]) {
                visit[next] = 1;
                q.push(next);
            }
        }
    }

    return { cnt, sum };
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 0, a, b; i < m; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    for (int i = 1; i <= n; i++)
        if (!visit[i]) t.push_back(bfs(i));

    for (int i = 0; i < t.size(); i++) {
        for (int j = 1; j < k; j++) {
            if (j >= t[i].first)
                tmp[j] = max(dp[j], dp[j - t[i].first] + t[i].second);
            else tmp[j] = dp[j];
        }
        copy(tmp, tmp + k, dp);
    }

    cout << dp[k - 1] << '\n';
    
    return 0;
}