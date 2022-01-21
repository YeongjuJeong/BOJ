#include <iostream>
#include <string>
using namespace std;

int arr[3];

int main() {
    string s; getline(cin, s);
    int i = 0;
    for (auto c : s)
        if ('0' <= c && c <= '9') arr[i++] = c - '0';

    cout << ((arr[0] + arr[1] == arr[2]) ? "YES\n" : "NO\n");

    return 0;
}