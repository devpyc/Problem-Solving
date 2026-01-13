#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    ordered_set<pair<long long,int>>s;

    for (int i=0; i<n; i++) {
        long long x;
        cin>>x;

        int cnt=s.order_of_key({x,INT_MAX});
        cout<<i-cnt+1<<"\n";
        s.insert({x,i});
    }
}