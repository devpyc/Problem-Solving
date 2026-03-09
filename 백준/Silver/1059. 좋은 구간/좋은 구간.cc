#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int m;
    cin>>m;

    for (int i=0; i<n; i++) {
        if (arr[i]==m) {
            cout<<0;
            return 0;
        }
    }

    sort(arr.begin(),arr.end());

    int l=0;
    for (int i=0; i<n; i++) {
        if (arr[i]<m) {
            l=arr[i];
        }else break;
    }

    int r=1001;
    for (int i=0; i<n; i++) {
        if (arr[i]>m) {
            r=arr[i];
            break;
        }
    }

    int cnt=0;

    for (int i=l+1; i<=m; i++) {
        for (int j=m; j<r; j++) {
            if (i<j) cnt++;
        }
    }

    cout<<cnt;
}