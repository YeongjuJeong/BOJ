// 4589 Gnome Sequencing

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a, b, c;
    cout << "Gnomes:\n";
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if ((a < b && b < c) || (a > b && b > c)) cout << "Ordered\n";
        else cout << "Unordered\n";
    }
}
