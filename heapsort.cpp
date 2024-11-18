#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int tmp = a;
    a=b; b= tmp;
}
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n){
    for(int i=(n/2)-1; i>=0; i--){
        heapify(arr, n , i);
    }
    for(int i= n-1; i>=1; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    heapsort(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";    
    }
    return 0;
}