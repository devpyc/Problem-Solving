#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<long long>arr(n);
    long long sum=0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        if (i<m) {
            sum+=arr[i];
        }
    }

    long long Max=sum;
    for (int i=m; i<n; i++) {
        sum+=arr[i]-arr[i-m];
        Max=max(Max,sum);
    }
    cout<<Max;
}