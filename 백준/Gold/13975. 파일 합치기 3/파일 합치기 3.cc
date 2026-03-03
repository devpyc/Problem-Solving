#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        priority_queue<long long,vector<long long>,greater<long long>>pq;

        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            pq.push(x);
        }

        long long ans=0;
        while (pq.size()>1) {
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            ans+=a+b;
            pq.push(a+b);
        }
        cout<<ans<<"\n";
    }
}