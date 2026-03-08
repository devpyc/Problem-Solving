#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[n-k];
}