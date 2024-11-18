#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    int s; cin >> s;
    int dp[s+1]; dp[0]=1;
    for(int i=1;i<=s;i++){
        dp[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=s;j>=arr[i];j--){
            if(dp[j]==0){
                // tổng j được tạo thành sẽ có khả năng được tạo thành giống như khi tạo thành tổng j-arr[i]
                dp[j]=dp[j-arr[i]];
            }
        }
    }
    cout << dp[s] << endl;
    return 0;
}