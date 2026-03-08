#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        a[i]=arr[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    a.erase(unique(a.begin(),a.end()),a.end());
    sort(arr.begin(),arr.end());

    cout<<a[2]<<" "<<upper_bound(arr.begin(),arr.end(),a[2])-lower_bound(arr.begin(),arr.end(),a[2]);
}