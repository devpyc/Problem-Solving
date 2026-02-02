#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using ordered_set=tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n+1);
    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;
        arr[x]=i;
    }

    ordered_set s;
    for (int i=1; i<=n; i++) {
        s.insert(i);
    }

    int l=1,r=n;
    while (l<=r) {
        int i=arr[l];
        cout<<s.order_of_key(i)<<"\n";
        s.erase(i);
        l++;

        if (l>r) break;
        i=arr[r];
        cout<<(int)s.size()-s.order_of_key(i)-1<<"\n";
        s.erase(i);
        r--;
    }
}