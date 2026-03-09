#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using ordered_set=tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    ordered_set s;

    while (t--) {
        int n,x;
        cin>>n>>x;

        if (n==1) {
            s.insert({x,t});
        }else {
            cout<<s.find_by_order(x-1)->first<<"\n";
            s.erase(s.find_by_order(x-1));
        }
    }
}