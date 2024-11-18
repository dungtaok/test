#include <bits/stdc++.h>
using namespace std;
void nextLine(int arr[],int n){
    if(n>0){
        cout << "[";
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        } cout << "\b" << "]" << endl;
        int tmp[n-1];
        for(int i=0;i<n-1;i++){
            tmp[i] = arr[i]+arr[i+1];
        }
        for(int i=0;i<n-1;i++){
            arr[i]=tmp[i];
        }
        nextLine(arr,n-1);
    } else {
        return;
    }
}
int main(){
    int  t; cin >> t;
    int number[t];
    for(int i=0;i<t;i++){
        cin >> number[i];
    }
    for(int i=0;i<t;i++){
        int arr[number[i]];
        for(int j=0;j<number[i];j++){
            cin >> arr[j];
        }
        nextLine(arr,number[i]);
    }
    return 0;
}