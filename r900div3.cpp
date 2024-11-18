#include <bits/stdc++.h>
using namespace std;
long long checking(long long n, long long k, long long x){
    long long maxsum = 0;
    for(long long i=n; i >(n-k);i--){
        maxsum += i;
    }
    // cout << maxsum << endl;
    if(maxsum < x) {
        return 0;
    }
    if(maxsum ==x) { 
        return 1;
    }
    double mid = (double)x/k;
    int middle = x/k;
    if(mid <=1 || mid >=n) return 0;
    cout << mid << " "  << middle << endl;
    if(mid > (double)(middle+0.5)){
        int lonhon = n - mid;
        int key = k/2;
        if(lonhon > key) return 1;
        else return 0;
    } else {
        return 1;
    }
}
int main(){
    long long testcase;
    cin >> testcase;
    long long resArr[testcase];
    for(long long i=0;i<testcase;i++){
        long long n, k;
        long long sumgoal; 
        // la so nguyen n, so so can lay, tong cuoi cung can dat duoc
        cin >> n >> k >> sumgoal;
        resArr[i] = checking(n, k, sumgoal);
    }
    for(long long i=0;i<testcase;i++){
        if(resArr[i]==1) {
            cout << "YES" << endl;
        } else if(resArr[i]==0){
            cout << "NO" << endl;
        }
    }
    return 0;
}