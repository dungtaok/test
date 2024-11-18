#include <bits/stdc++.h>
using namespace std;
int main(){
    char arr[100];
    int from = 1;
    int to = 40;
    for(int i=from;i<=to;i++){
        cout << i << " : " ;
        cin >> arr[i];
    }
    for(int i=from;i<=to;i++){
        if(arr[i]>='a'&&arr[i]<='d'){
            arr[i]-=32;
        }
    }
    for(int i=from;i<=to;i++){
        cout << i << arr[i] << " ";
    }
    return 0;
}