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

    int t;
    cin>>t;


    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        vector<long long>arr(n+1),tree(n+1);
        m+=k;
        while (m--) {
            char c;
            long long a,b;
            cin>>c>>a>>b;
            if (c=='P') {
                update(tree,a,b);
            }else {
                cout<<sum(tree,b)-sum(tree,a-1)<<"\n";
            }
        }
    }
}