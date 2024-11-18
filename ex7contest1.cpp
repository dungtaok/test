#include <bits/stdc++.h>
using namespace std;
void nextSum(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        if(arr[i]>1){
            if((arr[i]-1)>1){
                arr[i]--;
                arr[i+1]++;
            } else if((arr[i]-1)==1){
                int index = -1;
                for(int j=i;j<n;j++){
                    if(arr[j]==0) {
                        index = j;
                        break;
                    }
                }
                arr[i]--;
                arr[index]++;
            }
            break;
        }
    }
    for(int i=0; i< n;i++){
        if(arr[i]>0){
            cout << arr[i] << " ";
        }
    }
}
int checking(int arr[], int n){
    int check = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0) check = i;
    }
    if(check <0) return 1;
    else return 0;
}
void SumOf(int n){
    // cout << "(" << n << ")" ;
    int arr[n];
    arr[0]=n;1
    for(int i=1;i<n;i++){
        arr[i]=0;
    }
    cout << "(" ;
    for(int i=0;i<n;i++){
        if(arr[i]>0) cout << arr[i] << " ";
    } cout << "\b" << ")" << " ";
    while(!checking(arr, n)){
        cout << "(";
        nextSum(arr, n);
        cout << "\b" << ") ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    int number[t];
    for(int i=0;i<t;i++){
        cin >> number[i];
    }
    for(int i=0;i<t;i++){
        SumOf(number[i]);
    }
    return 0;
}
