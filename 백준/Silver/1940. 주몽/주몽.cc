#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<int>arr(n);
    for (int &i:arr) {
        cin>>i;
    }

    sort(arr.begin(),arr.end());

    int l=0,r=n-1;
    int cnt=0;
    while (l<r) {
        int x=arr[l]+arr[r];
        if (x==m) {
            cnt++;
        }
        if (x>=m) {
            r--;
        }else {
            l++;
        }
    }
    cout<<cnt;
}