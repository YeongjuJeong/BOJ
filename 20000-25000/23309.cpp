#include <iostream>
#define MAX 1000001
using namespace std;

typedef struct Subway {
	int prev;
	int next;
};

Subway subway[MAX];

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	int cur, prev = 0, first = 0, last = 0;
	for (int i = 0; i < n; i++) {
		cin >> cur;
		if (i == 0) first = cur;
		if (i == n - 1) last = cur;
		subway[prev].next = cur;
		subway[cur].prev = prev;
		prev = cur;
	}

	subway[last].next = first;
	subway[first].prev = last;

	string s;
	for (int i = 0, a, b; i < m; i++) {
		cin >> s;
		if (s == "BN") {
			cin >> a >> b;
			int next = subway[a].next;
			cout << next << '\n';
			subway[b].prev = a;
			subway[b].next = next;
			subway[a].next = b;
			subway[next].prev = b;
		}
		else if (s == "BP") {
			cin >> a >> b;
			int prev = subway[a].prev;
			cout << prev << '\n';
			subway[b].prev = prev;
			subway[b].next = a;
			subway[a].prev = b;
			subway[prev].next = b;
		}
		else if (s == "CN") {
			cin >> a;
			int cur = subway[a].next;
			cout << cur << '\n';
			int prev = subway[cur].prev;
			int next = subway[cur].next;
			subway[prev].next = next;
			subway[next].prev = prev;
		}
		else { // s == "CP"
			cin >> a;
			int cur = subway[a].prev;
			cout << cur << '\n';
			int prev = subway[cur].prev;
			int next = subway[cur].next;
			subway[prev].next = next;
			subway[next].prev = prev;
		}
	}

	return 0;
}
