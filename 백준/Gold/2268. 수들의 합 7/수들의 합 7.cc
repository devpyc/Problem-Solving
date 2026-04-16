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

    int n,m;
    cin>>n>>m;

    vector<long long>tree(n+1),arr(n+1);

    while (m--) {
        long long a,i,j;
        cin>>a>>i>>j;

        if (a==0) {
            if (i>j) swap(i,j);
            cout<<sum(tree,j)-sum(tree,i-1)<<"\n";
        }else {
            long long diff=j-arr[i];
            arr[i]=j;
            update(tree,i,diff);
        }
    }
}