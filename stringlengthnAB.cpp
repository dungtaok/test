#include <bits/stdc++.h>
using namespace std;
void nextstring(string arr[], int n){
    int k = n-1;
    while(k>=0 && arr[k]=="B"){
        arr[k]="A";
        k--;
    }
    if(k>=0){
        arr[k]="B";
    }
}
void stringAB(int n){
    string arr[n];
    for(int i=0;i<n;i++){
        arr[i]= "A";
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    } cout << " ";
    for(int i =1; i< (int ) pow(2,n);i++){
        nextstring(arr,n);
        for(int j=0;j<n;j++){
            cout << arr[j];
        }cout << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;    
    int number[t];
    for(int i = 0; i< t; i++){
        cin >> number[i];
    }
    for(int i=0;i<t;i++){
        stringAB(number[i]);
    }
    return 0;
}
