#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    priority_queue<int>pq;

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        if (x!=0) {
            pq.push(x);
        }else {
            if (!pq.empty()) {
                cout<<pq.top()<<"\n";
                pq.pop();
            }else {
                cout<<0<<"\n";
            }
        }
    }
}