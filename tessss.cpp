#include <bits/stdc++.h>
using namespace std;
int main(){
    // std::stack<int> stackdata;
    // stackdata.push(1);
    // stackdata.push(4);
    // stackdata.push(13);
    // while(!stackdata.empty()){
    //     cout << stackdata.top() << endl;
    //     stackdata.pop();
    // }
    std::queue<int> q_data;
    for(int i=1;i<=4;i++){
        q_data.push(i);
    }
    while(!q_data.empty()){
        cout << q_data.front() << " " << q_data.back() << endl;
        q_data.pop();
    }
    return 0;
}