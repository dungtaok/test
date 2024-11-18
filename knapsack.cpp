#include <bits/stdc++.h>
using namespace std;
int maxbet(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n, s;
    cin >> n >> s;
    int v[n+1], w[n+1];
    for(int i=1;i<=n;i++){
        cin >> w[i];
    }
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    int dp[n+1][s+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<s+1;j++){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            // Nếu không cho vật thứ i vào thì giá trị là dp[i-1][j] là giá trị lớn nhất khi lấy từ vật 1 đến vật (i-1) với khối lượng cái túi là j
            dp[i][j]= dp[i-1][j];
            if(j>=w[i]){
                // Nếu có lấy vật thứ i thì giá trị sẽ là số lớn hơn giữa không lấy vật thứ i và có lấy vật thứ i, có lấy vật thứ i là dp[i-1][j-w[i]]+v[i]
                dp[i][j]=maxbet(dp[i][j],dp[i-1][j-w[i]]+v[i]);
            }     
        }
    }
    cout << dp[n][s] << endl;
    return 0;   
}