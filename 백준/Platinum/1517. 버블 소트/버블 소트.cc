#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    ordered_set s;
    long long cnt=0;

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;

        cnt+=1LL*s.size()-s.order_of_key({x,INT_MAX});
        s.insert({x,i});
    }
    cout<<cnt;
}