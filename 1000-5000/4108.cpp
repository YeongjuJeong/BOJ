#include <iostream>
#define ll long long
using namespace std;

int n, m;
string arr[105];

int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void calc(int x, int y) {
    int cnt = 0;
    for (int k = 0; k < 8; k++) {
        int a = x + dx[k];
        int b = y + dy[k];

        if (0 <= a && a < n && 0 <= b && b < m) {
            if (arr[a][b] == '*') cnt++;
        }
    }

    cout << cnt;
}

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;

        for (int i = 0; i < n; i++) cin >> arr[i];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == '*') cout << '*';
                else calc(i, j);
            }
            cout << '\n';
        }
    }

    return 0;
}
