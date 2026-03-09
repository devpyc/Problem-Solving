#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main(){
    io;
    int n;
    cin>>n;

    deque<pair<int,int>> ans;

    for(int i=1; i<=n; i++){
        int p;
        cin>>p;
        ans.push_back({i,p});
    }

    while(!ans.empty()){
        int cur_num=ans.front().first;
        int move=ans.front().second;

        cout<<cur_num<<" ";

        ans.pop_front();

        if(ans.empty()) break;

        if(move>0){
            for(int i=0; i<move-1; i++){
                ans.push_back(ans.front());
                ans.pop_front();
            }
        }else{
            for(int i=0; i<-move; i++){
                ans.push_front(ans.back());
                ans.pop_back();
            }
        }
    }
}