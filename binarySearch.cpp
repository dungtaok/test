#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int left, int right, int key){
    int mid = (left+right)/2; 
    if(key==arr[mid]){
        return mid;
    } 
    if(key>arr[mid]){
        return binarysearch(arr, mid+1, right, key);
    } else {
        return binarysearch(arr, left, mid-1, key);
    }
}
int main(){
    int n = 100;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = i+2;
    }
    cout << binarysearch(arr, 0, n-1, 9) << endl;
    cout << boolalpha << binary_search(arr, arr+n, 9) << endl;
    return 0;
}