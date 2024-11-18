#include <bits/stdc++.h>
using namespace std;

int maxbet(int a, int b){
    if(a>=b) return a;
    else return b;
}

int main(){
    string X,Y;
    getline(cin, X);
    getline(cin, Y);
    int Res[X.size()+1][Y.size()+1];
    for(int i=0;i<X.size();i++){
        Res[i][0]=0;
    }
    for(int i=0;i<Y.size();i++){
        Res[0][i]=0;
    }
    for(int i=0;i<X.size();i++){
        for(int j=0; j<Y.size();j++){
            if(X[i]==Y[j]){
                Res[i+1][j+1] = Res[i][j]+1;
            } else {
                Res[i+1][j+1]= maxbet(Res[i+1][j],Res[i][j+1]);
            }
        }
    }
    cout << Res[X.size()][Y.size()] << endl;
    // cout << X.size() << " " << Y.size();
    // cout << X << endl << Y;
    return 0;
}