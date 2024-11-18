#include <bits/stdc++.h>
using namespace std;
void tapcontieptheo(int arr[], int n, int k){
    int end = k-1;
    while(end>=0 && arr[end]==(n-k+1+end)){
        end--;
    }
    arr[end]++;
    for(int i=1;i<=(k-end); i++){
        arr[end+i] = arr[end]+i;
    }
}
int C(int n, int k){
    int res= 1;
    for(int i =1; i<=n;i++) res*=i;
    for(int i=1;i<=k;i++) res/=i;
    for(int i=1;i<=(n-k);i++) res/=i;
    return res;
}
void ToHop(int n, int k){
    int arr[k];
    for(int i=0;i<k;i++){
        arr[i]=i+1;
        cout << arr[i];
    } cout << " ";
    for(int i=1;i<C(n,k);i++){
        tapcontieptheo(arr,n,k);
        for(int j =0; j< k; j++){
            cout << arr[j];
        }cout << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    int length[t], key[t];
    for(int i = 0; i< t ; i++){
        int n, k; cin >> n >> k;
        length[i] = n;
        key[i] = k;
    }
    for(int i = 0; i<t;i++){
        ToHop(length[i], key[i]);
    }
    return 0;
}