#include <bits/stdc++.h>
using namespace std;

void NextSub(int n, int arr[], int k){
    int i = k-1;
    while(arr[i]>=(n-k+i+1) && i>=0){  //Tìm vị trí đầu tiên từ cuối lên sao cho arr[i] < (n-k+i+1) 
                                        //(đây là giá trị lớn nhất của arr[i] có thể nhận để vẫn giữ được điều kiện của dãy)
        i--;
    }
    // cout << " Hellooo " << i << endl;
    if(i<0){
        for(int j = 0;j<k;j++){
            arr[j]  = j+1;
        }
    }else{
        arr[i] = arr[i]+1;
        int plus = 1;
        for(int j=i+1; j<k;j++){
            arr[j] = arr[i]+plus;
            plus++;
        }
    }
}

int main(){
    int testcase; cin >> testcase;
    int arr[testcase][1000];
    int arrlen[testcase];
    for(int i = 0 ; i< testcase; i++){
        int n; int k;
        cin >> n >> k;
        arrlen[i] = k;
        for(int j = 0;j<k;j++){
            cin >> arr[i][j];
        }   
        NextSub(n, arr[i], k);
    }
    for(int i = 0 ;i<testcase;i++){
        for(int j=0;j<arrlen[i]; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }
    return 0;
}