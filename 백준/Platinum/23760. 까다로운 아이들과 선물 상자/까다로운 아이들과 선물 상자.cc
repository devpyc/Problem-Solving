#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace std;
using namespace __gnu_pbds;
using ordered_set=tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<int>arr(n);

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    vector<int>a(m),b(m);
    for (int i=0; i<m; i++) {
        cin>>a[i];
    }
    for (int i=0; i<m; i++) {
        cin>>b[i];
    }

    ordered_set s;
    s.clear();
    for (int i=0; i<n; i++) {
        s.insert({arr[i],i});
    }

    for (int i=0; i<m; i++) {
        int j=n-b[i];
        auto it=s.find_by_order(j);
        int cnt=it->first;
        int id=it->second;

        if (cnt<a[i]) {
            cout<<0<<"\n";
            return 0;
        }

        s.erase(it);
        s.insert({cnt-a[i],id});
    }
    cout<<1<<"\n";
}