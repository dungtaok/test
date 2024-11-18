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
int giaithua(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}
void Permutation(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = i+1;
        cout << arr[i];
    }cout << " ";
    for(int i=1; i<giaithua(n);i++){
        nextPermutation(arr, n);
        for(int j=0;j<n;j++){
            cout << arr[j];
        } cout << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    int length[t];
    for(int i=0;i<t;i++){
        cin >> length[i];
    }
    for(int i=0;i<t;i++){
        Permutation(length[i]);
    }
    return 0;
}