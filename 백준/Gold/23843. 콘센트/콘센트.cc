#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    ll arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<ll>());

    priority_queue<ll,vector<ll>,greater<ll>>pq;

    while (m--) {
        pq.push(0);
    }

    for (int i=0; i<n; i++) {
        ll Min=pq.top();
        pq.pop();

        pq.push(Min+arr[i]);
    }

    ll Max=0;

    while (!pq.empty()) {
        Max=max(Max,pq.top());
        pq.pop();
    }
    cout<<Max;
}