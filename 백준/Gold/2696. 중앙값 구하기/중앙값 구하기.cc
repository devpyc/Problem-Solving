#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);


    int t;
    cin>>t;
    while (t--) {
        ordered_set<pair<int,int>>s;
        int n;
        cin>>n;
        cout<<n/2+1<<"\n";
        for (int i=1; i<=n; i++) {
            int x;
            cin>>x;
            s.insert({x,i});
            if (i%2==1) cout<<s.find_by_order(s.size()/2)->first<<" ";
        }
        cout<<"\n";
    }
}