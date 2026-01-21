#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using orderd_set=tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>r1(n+1),r2(n+1),r3(n+1);

    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;

        r1[x]=i;
    }

    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;
        r2[x]=i;
    }
    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;
        r3[x]=i;
    }

    vector<int>arr(n);
    iota(arr.begin(),arr.end(),1);
    sort(arr.begin(),arr.end(),[&](int a, int b){ return r1[a]<r1[b]; });

    orderd_set s;
    int ans=0;

    auto INF=(int)2e9;

    for (int i:arr) {
        int a=r2[i],b=r3[i];

        bool check=false;

        auto it=s.lower_bound({a,-INF});
        if (it!=s.begin()) {
            auto pit=prev(it);
            if (pit->second<b) check=true;
        }

        if (!check) ans++;

        it=s.lower_bound({a,-INF});

        if (it!=s.end()&&it->first==a) {
            if (it->second<=b) continue;
            s.erase(it);
        }
        it=s.lower_bound({a,-INF});
        if (it!=s.begin()) {
            auto pit=prev(it);
            if (pit->second<b) continue;
        }

        auto push=s.insert({a,b}).first;
        auto nxt=next(push);
        while (nxt!=s.end()&&nxt->second>=b) {
            auto er=nxt++;
            s.erase(er);
        }
    }
    cout<<ans;
}