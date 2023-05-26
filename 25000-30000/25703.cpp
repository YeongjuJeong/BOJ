// 25703 포인터 공부

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    cout << "int a;\nint *ptr = &a;\n";
    for (int i = 2; i <= n; i++) {
        cout << "int *";
        for (int j = 1; j < i; j++) {
            cout << "*";
        }
        cout << "ptr";
        cout << i;
        cout << " = &ptr";
        if (i != 2) cout << i - 1;
        cout << ";\n";
    }

    return 0;
}
