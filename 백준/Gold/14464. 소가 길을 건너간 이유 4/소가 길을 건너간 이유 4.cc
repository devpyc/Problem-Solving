#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int c,n;
    cin>>c>>n;

    vector<int>arr(c);
    for (int i=0; i<c; i++) {
        cin>>arr[i];
    }

    vector<int>a(n),b(n);
    for (int i=0; i<n; i++) {
        cin>>a[i]>>b[i];
    }

    sort(arr.begin(),arr.end());

    vector<int>idx(n);
    iota(idx.begin(),idx.end(),0);
    sort(idx.begin(),idx.end(),[&](int i, int j){ return a[i]<a[j]; });

    priority_queue<int,vector<int>,greater<int>>pq;

    int ci=0,ans=0;
    for (int i:arr) {
        while (ci<n&&a[idx[ci]]<=i) {
            pq.push(b[idx[ci]]);
            ci++;
        }

        while (!pq.empty()&&pq.top()<i) {
            pq.pop();
        }

        if (!pq.empty()) {
            pq.pop();
            ans++;
        }
    }
    cout<<ans;
}