// 8321 Tables

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int arr[1001];
int main() {
    int a,b,c,x; cin>>a>>b>>c;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr, arr+a, greater<>());
    int sum=0, ans;
    for(int i=0;i<a;i++){
        sum+=arr[i];
        if (sum >= b*c){
            ans = i+1;
            break;
        }
    }
    cout<<ans;
    return 0;
}
