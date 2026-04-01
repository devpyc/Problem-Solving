#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,x;
    cin>>n>>x;

    vector<long long>arr(n);
    long long sum=0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        if (i<x) {
            sum+=arr[i];
        }
    }
    long long ans=sum;
    for (int i=x; i<n; i++) {
        sum+=arr[i]-arr[i-x];
        ans=max(ans,sum);
    }
    cout<<ans;
}