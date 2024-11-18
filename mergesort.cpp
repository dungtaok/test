#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right){
    // mảng 1 [left , mid], mảng 2 [mid+1, right]
    // so sánh lần lượt các phần tử ở đầu, phần tử nào nhỏ hơn thì được xếp trước
    vector<int> LEFT(arr+left, arr+mid+1);
    vector<int> RIGHT(arr + mid+1, arr+ right +1);
    int i=0, j=0;
    while(i<LEFT.size() && j<RIGHT.size()){
        if(LEFT[i]<RIGHT[j]){
            arr[left] = LEFT[i];
            i++;
            left++;
        } else {
            arr[left] = RIGHT[j];
            j++;
            left++;
        }
    }
    while(i<LEFT.size()){
        arr[left] = LEFT[i];
        i++;
        left++;
    }
    while(j<RIGHT.size()){
        arr[left] = RIGHT[j];
        j++;
        left++;
    }
}
void mergesort(int arr[], int left, int right){
    if(left>=right) return;
    int mid =  (right + left)/2;
    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);
    merge(arr, left, mid, right);
}
int main() {
    int n ; cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    mergesort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}