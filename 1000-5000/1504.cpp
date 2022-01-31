#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1e17
using namespace std;

int n, e;

vector<pair<int, int>> v[801];
long long dist[801];

long long dijkstra(int start, int end) {
    priority_queue<pair<int, int>> pq;
    fill(dist, dist + n + 1, INF);
    pq.push({ 0, start });
    dist[start] = 0;

    while (!pq.empty()) {
        long long cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if (cur == end) break;
        if (cost > dist[cur]) continue;

        for (int i = 0; i < v[cur].size(); i++) {
            long long nc = cost + v[cur][i].second;
            int next = v[cur][i].first;

            if (nc < dist[next]) {
                dist[next] = nc;
                pq.push({ -nc, next });
            }
        }
    }

    return (dist[end] >= INF ? -1 : dist[end]);
}

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> e;

    for (int i = 0, a, b, c; i < e; i++) {
        cin >> a >> b >> c;
        v[a].push_back({ b, c });
        v[b].push_back({ a, c });
    }

    int x, y; cin >> x >> y;

    long long start_x = dijkstra(1, x);
    long long start_y = dijkstra(1, y);
    long long x_y = dijkstra(x, y);
    long long x_n = dijkstra(x, n);
    long long y_n = dijkstra(y, n);

    if ((start_x == -1 || x_y == -1 || y_n == -1)
        && (start_y == -1 || x_y == -1 || x_n == -1)) {
        cout << "-1\n"; return 0;
    }

    if (start_x == -1 || x_y == -1 || y_n == -1) {
        cout << start_y + x_y + x_n << '\n'; return 0;
    }

    if (start_y == -1 || x_y == -1 || x_n == -1) {
        cout << start_x + x_y + y_n << '\n'; return 0;
    }

    cout << min(start_y + x_y + x_n, start_x + x_y + y_n) << '\n';

    return 0;
}