#include <bits/stdc++.h>
using namespace std;
typedef struct monster {
        int power;
        int diemcongthem;
} monster;
int partition(monster arr[],int left, int right){
    int pivot = arr[right].power;
    int i= left;
    int j= right-1;   
    while(i<j){
        while(i<right && arr[i].power<=pivot) i++;
        while(j<right && arr[j].power>=pivot) j--;
        if(i>=j) break;
        swap(arr[i], arr[j]);
        i++;    
        j--;
    }
    swap(arr[i], arr[right]);
    return i;
}
void quicksort(monster arr[], int low, int high){
    if(low>=high) return;
    int p = partition(arr, low, high);
    quicksort(arr, low, p-1);
    quicksort(arr, p+1, high);
}
int checking(int &s, int power, int diemcongthem){
    int check =0;
    if(s<power){
        check =1;
    }
    if(check ==0 ) s+=diemcongthem;
    return check;
}
int main() {
    typedef struct monster {
        int power;
        int diemcongthem;
    } monster;
    int s, n;
    cin >> s >> n;
    int resarr[n];
    monster arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].power >> arr[i].diemcongthem;
    }
    for(int i=0;i<n;i++){
        int sum = s;
        int check = 0 ;
        check += checking(sum, arr[i].power, arr[i].diemcongthem);
        if(check ==0 ) resarr[i]=1;
        else resarr[i]=0;
    }
    for(int i=0; i<n; i++) {
        if(resarr[i]==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }  
    return 0;
}