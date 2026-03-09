#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main(){
    io;
    int n;
    cin>>n;

    queue<int> l;
    stack<int> w;
    int next_n =1;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        l.push(num);
    }

    while(!l.empty()||!w.empty()){
        if(!l.empty()&&l.front()==next_n){
            l.pop();
            next_n++;
        } else if(!w.empty()&&w.top()==next_n){
            w.pop();
            next_n++;
        } else if(!l.empty()){
            w.push(l.front());
            l.pop();
        } else{
            cout<<"Sad"<<"\n";
            return 0;
        }
    }
    cout<<"Nice"<<"\n";
}