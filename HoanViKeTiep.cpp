#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int tmp = a;
    a=b; b=tmp;
}
void reverse(int arr[],int start, int end){     
    if(end>start){
        while(end>start){
            swap(arr[end], arr[start]);
            end--;
            start++;
        }
    }
}
void nextPermutation(int arr[], int n){
    int k = n-1;
    int minarr = INT_MAX;
    int index = -1;
    for(int k=n-1;k>=1;k--){
        if(arr[k]>arr[k-1]){
            for(int j=k; j<n;j++){
                if(arr[j]>arr[k-1]){
                    minarr = min(minarr, arr[j]);
                    if(minarr=arr[j]) index = j;
                }
            }
            swap(arr[k-1], arr[index]);
            reverse(arr, k, n-1);
            break;
        }
    }
}
int main(){
    int t; cin >> t;
    int res[t][1000]; int len[t];
    for(int i=0;i < t; i++){
        int n; cin >> n;
        len[i] = n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> res[i][j];
        }   
        nextPermutation(res[i], n);
        // nextPermutation(arr, n);
        // for(int j=0;j<)
    }
    for(int i =0; i<t; i++){
        for(int j=0;j<len[i]; j++){
            cout << res[i][j] << " ";
        }    cout << endl;
    }
    // int n; cin >> n;
    // int arr[n];
    // for(int i =0; i<n;i++){
    //     cin >> arr[i];
    // }
    // nextPermutation(arr, n);
    // for(int x : arr){
    //     cout << x << " ";
    // }
    return 0;
}