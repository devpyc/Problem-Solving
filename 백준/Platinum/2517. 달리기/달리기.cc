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

    ordered_set<int>s;

    while (t--) {
        int x;
        cin>>x;

        s.insert(x);
        cout<<s.size()-s.order_of_key(x)<<"\n";
    }
}