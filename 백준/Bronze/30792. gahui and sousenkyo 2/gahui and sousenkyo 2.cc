#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    int arr[n];
    int x;
    cin>>x;
    arr[0]=x;
    for (int i=1; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    cout<<find(arr,arr+n,x)-arr+1;
}