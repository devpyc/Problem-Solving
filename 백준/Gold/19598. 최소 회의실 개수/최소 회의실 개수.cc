#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end());

    priority_queue<int,vector<int>,greater<int>>pq;

    int ans=0;
    for (int i=0; i<n; i++) {
        int start=arr[i].first,end=arr[i].second;

        if (!pq.empty()&&pq.top()<=start) {
            pq.pop();
        }
        pq.push(end);
        ans=max(ans,(int)pq.size());
    }
    cout<<ans;
}