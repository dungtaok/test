#include <bits/stdc++.h>
using namespace std;
int djkstra(int arr[][], int n, int m){

}
int main(){
    int n , m; cin >> n >> m;
    int arr[n][n] = {-1};
    for(int i=1;i<=m;i++){
        int from, to, key;
        cin >> from >> to >> key;
        arr[from-1][to-1] = key;
    }
    int Ke[n][n]={0};
    for(int i)

}