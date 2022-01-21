#include <iostream>
using namespace std;

int main() {
    int l, s; cin >> l >> s;

    if (s <= l) cout << "Congratulations, you are within the speed limit!\n";
    else if (1 <= s - l && s - l <= 20) cout << "You are speeding and your fine is $100.\n";
    else if (21 <= s - l && s - l <= 30) cout << "You are speeding and your fine is $270.\n";
    else cout << "You are speeding and your fine is $500.\n";

    return 0;
}
