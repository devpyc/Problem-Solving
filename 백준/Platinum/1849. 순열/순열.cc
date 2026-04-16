#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set=tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n+1);
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
    }

    ordered_set<int>s;
    for (int i=1; i<=n; i++) {
        s.insert(i);
    }

    vector<int>ans(n+1);
    for (int i=1; i<=n; i++) {
        auto it=s.find_by_order(arr[i]);
        ans[*it]=i;
        s.erase(it);
    }

    for (int i=1; i<=n; i++) {
        cout<<ans[i]<<"\n";
    }
}