#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main(){
    io;
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    deque<int>qstack;
    for(int i=0; i<n; i++){
        int b;
        cin>>b;
        if(a[i]==0){
            qstack.push_front(b);
        }
    }

    int m;
    cin>>m;

    for(int i=0; i<m; i++){
        int c;
        cin>>c;
        qstack.push_back(c);
        cout<<qstack.front()<<" ";
        qstack.pop_front();
    }
}