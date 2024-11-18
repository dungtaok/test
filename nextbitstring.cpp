#include <bits/stdc++.h>
using namespace std;
void NextBitString(string &s){
    int i= s.size() -1;
    while(s[i]=='1'){
        s[i] = '0';
        i--;
    }
    if(i>=0){
        s[i] = '1';
        cout << s ;
    } else {
        cout << s;
    }
}
int main(){
    int n; cin >> n;
    string arr[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, arr[i]);
    }
    for(int i=0;i<n-1;i++){
        NextBitString(arr[i]);
        cout << "\n";
    }
    NextBitString(arr[n-1]);
    return 0;
}