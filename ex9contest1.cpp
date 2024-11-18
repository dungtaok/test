#include <bits/stdc++.h>
using namespace std;
void Println(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] ;
    } cout << " ";
}
void Gray(int n){
    int arr[n] = {0};
    Println(arr, n);
    int key=n-1;
    while(key>=0){
        while(arr[key]==1){
            arr[key]=0;
            key--;
        }
        arr[key]=1;
        if(key>=0){
            Println(arr,n);
            key=n-1;
        }
    }
}
int main(){
    int n; cin >> n;
    int number[n];
    for(int i=0;i<n;i++){
        cin >> number[i];
    }
    for(int i=0;i<n;i++){
        Gray(number[i]);
        cout << endl;
    }
    return 0;
}