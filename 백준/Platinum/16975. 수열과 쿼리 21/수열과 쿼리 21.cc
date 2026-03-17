#include <bits/stdc++.h>
using namespace std;

const int MAX=1000005;

int n,m;
long long tree[MAX];
long long arr[MAX];

void update(int idx, long long val) {
    while (idx<=n) {
        tree[idx]+=val;
        idx+=idx&-idx;
    }
}

long long sum(int idx) {
    long long res=0;
    while (idx>0) {
        res+=tree[idx];
        idx-=idx&-idx;
    }
    return res;
}

long long query(int l, int r) {
    return sum(r)-sum(l-1);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>n;
    
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
    }

    cin>>m;
    
    while (m--) {
        int x;
        cin>>x;

        if (x==1) {
            int i,j;
            long long k;
            cin>>i>>j>>k;
            
            update(i,k);
            
            if (j+1<=n) update(j+1,-k);
        } else {
            int y;
            cin>>y;
            cout<<arr[y]+sum(y)<<"\n";
        }
    }
}