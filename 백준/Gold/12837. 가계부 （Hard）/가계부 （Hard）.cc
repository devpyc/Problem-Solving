#include <bits/stdc++.h>
using namespace std;

long long sum(vector<long long>&tree, int i) {
    long long ans=0;
    while (i>0) {
        ans+=tree[i];
        i-=(i&-i);
    }
    return ans;
}

void update(vector<long long>&tree, int i, long long diff) {
    while (tree.size()>i) {
        tree[i]+=diff;
        i+=(i&-i);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,t;
    cin>>n>>t;

    vector<long long>arr(n+1,0),tree(n+1,0);

    while (t--) {
        long long a,p,q;
        cin>>a>>p>>q;

        if (a==1) {
            update(tree,p,q);
        } else {
            cout<<sum(tree,q)-sum(tree,p-1)<<"\n";
        }
    }
}