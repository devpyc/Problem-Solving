#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace std;
using namespace __gnu_pbds;
using ordered_set=tree<pair<ll,int>,null_type,less<pair<ll,int>>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<ll>a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    vector<int>b(n);
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }

    ordered_set s;
    for (int i=0; i<n; i++) {
        s.insert({a[i],i});
    }

    vector<ll>ans(n);

    for (int i=n-1; i>=0; i--) {
        auto it=s.find_by_order(b[i]);
        ans[i]=it->first;
        s.erase(it);
    }

    for (int i=0; i<n; i++) {
        cout<<ans[i]<<"\n";
    }
}