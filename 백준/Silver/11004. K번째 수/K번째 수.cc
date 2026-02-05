#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    nth_element(arr,arr+k-1,arr+n);
    cout<<arr[k-1];
}