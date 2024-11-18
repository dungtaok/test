#include <bits/stdc++.h>
using namespace std;
int maxbet(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n; cin>>n;
    int arr[n]; int Res[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        Res[i]=1;
    }
    int max = 0 ;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                Res[i]= maxbet(Res[i],Res[j]+1);
            }
            if(Res[i]>max) max = Res[i];
        }
    }
    cout << max;
    return 0;
}