// 28431 양말 짝 맞추기

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int arr[5];
    for (int i = 0; i < 5; i++) cin >> arr[i];
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                arr[i] = -1; arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] != -1) cout << arr[i];
    }
    
    return 0;
}
