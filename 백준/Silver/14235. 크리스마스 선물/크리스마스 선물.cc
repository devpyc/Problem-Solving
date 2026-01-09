#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    priority_queue<int>pq;

    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;
        if (x==0) {
            if (!pq.empty()) {
                cout<<pq.top()<<"\n";
                pq.pop();
            }else {
                cout<<-1<<"\n";
            }
        }else {
            for (int i=0; i<x; i++) {
                int n;
                cin>>n;
                pq.push(n);
            }
        }
    }
}