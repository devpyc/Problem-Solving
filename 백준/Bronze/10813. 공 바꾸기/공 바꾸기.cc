#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++) {
        arr[i]=i+1;
    }
    while(m--) {
        int a,b;
        cin>>a>>b;
        swap(arr[a-1],arr[b-1]);
    }
    for(int i:arr) {
        cout<<i<<" ";
    }
}