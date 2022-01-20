// 11091 알파벳 전부 쓰기
// 공백 포함 한 줄 입력 받기 -> getline() 함수.
// cin >> n 에서 공백이 들어있었기 때문에 getline() 함수를 한번 써줬음.

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int alpha[26];
vector<char> v;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	string str;
	getline(cin, str);
	for (int i = 0; i < n; i++) {
		memset(alpha, 0, sizeof(alpha));
		v.clear();
		getline(cin, str);
		for (int i = 0; i < str.length(); i++) {
			if ('a' <= str[i] && str[i] <= 'z') alpha[str[i] - 'a']++;
			else if ('A' <= str[i] && str[i] <= 'Z') alpha[str[i] - 'A']++;
		}
		for (int i = 0; i < 26; i++) {
			if (!alpha[i]) v.push_back('a' + i);
		}
		if (v.empty()) cout << "pangram\n";
		else {
			cout << "missing ";
			for (auto c : v) cout << c;
			cout << '\n';
		}
	}

	return 0;
}