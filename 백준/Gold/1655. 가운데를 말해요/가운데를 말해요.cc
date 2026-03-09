#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;

    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;

        if (maxh.empty()||x<=maxh.top()) maxh.push(x);
        else minh.push(x);

        if (maxh.size()>minh.size()+1) {
            minh.push(maxh.top());
            maxh.pop();
        }else if (minh.size()>maxh.size()) {
            maxh.push(minh.top());
            minh.pop();
        }
        cout<<maxh.top()<<"\n";
    }
}