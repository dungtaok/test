#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
    int res =1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b; b = tmp;
}

void reverse(int arr[], int start, int end){
    if(end>start){
        while(end>start){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

void nextPermutation(int arr[], int n){
    int maxarr = INT_MIN;
    int index = -1;
    for(int i=n-1;i>=1;i--){
        if(arr[i]<arr[i-1]){
            for(int k=i;k<n;k++){
                if(arr[k]<arr[i-1]){
                    maxarr= max(maxarr, arr[k]);
                    if(maxarr == arr[k]) index = k;
                }
            }
            swap(arr[i-1], arr[index]);
            reverse(arr, i , n-1);
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    } cout << " ";
}

void Permutation(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = n - i;
        cout << arr[i];
    } cout << " ";
    for(int i=1;i<giaithua(n);i++){
        nextPermutation(arr, n);
    }
    cout << "\b" << endl;
}

int main(){
    int t; cin >> t;
    int number[t];
    for(int i=0;i<t;i++){
        cin >> number[i];
    }
    for(int i = 0 ; i < t ; i++){
        Permutation(number[i]);
    }
    return 0;
}

