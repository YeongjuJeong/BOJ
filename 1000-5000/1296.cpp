// 1296 팀 이름 정하기

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void love(string s, int* arr){
    int size = s.size();
    for (int i = 0; i < size; i++){
        if (s[i] == 'L') arr[0]++;
        else if (s[i] == 'O') arr[1]++;
        else if (s[i] == 'V') arr[2]++;
        else if (s[i] == 'E') arr[3]++;
    }
}

long long calc(int* a1, int* a2){
    long long sum = 1;
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            sum = (sum * (a1[i] + a2[i] + a1[j] + a2[j])) % 100;
        }
    }
    return sum;
}

bool f(pair<string, long long> &a, pair<string, long long> & b){
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    string name;
    int n, namearr[4] = {0}, arr[51][4] = {0};
    
    vector<pair<string, long long>> v;
    
    cin >> name >> n;
    love(name, namearr);

    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        love(s, arr[i]);
        v.push_back({s, calc(namearr, arr[i])});
    }
    
    sort(v.begin(), v.end(), f);
    
    cout << v[0].first;

    return 0;
}
