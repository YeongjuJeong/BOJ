// 23235 The fastes Sorting Algorithm In The World

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t = 1;
    while (1){
        int n; cin >> n;
        if (!n) break;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
        }
        cout << "Case " << t++ << ": Sorting... done!\n";
    }

    return 0;
}
