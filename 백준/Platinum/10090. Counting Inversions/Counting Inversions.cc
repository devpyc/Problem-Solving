#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    ordered_set s;
    long long cnt=0;

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;

        int Min=s.order_of_key(x);
        int Max=s.size()-Min;
        cnt+=Max;
        s.insert(x);
    }
    cout<<cnt;
}