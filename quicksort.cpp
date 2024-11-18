#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int tmp = a;
    a= b; 
    b=tmp;
}
int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i= left;
    int j= right-1;
    while(i<=j){
        while(i<right && arr[i] <= pivot) i++;
        while(j>left && arr[j] >= pivot) j--;
        if(i>=j) break; 
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    swap(arr[i], arr[right]);
    return i;
}
void quicksort(int arr[], int low, int high){
    if(low>=high)   return;
    int p= partition(arr, low, high);
    quicksort(arr, low, p-1);
    quicksort(arr, p+1, high);
}
int main(){
    int n ; 
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}