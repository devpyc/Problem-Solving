#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;

        vector<int>arr(n+1);
        ordered_set<int>s;

        for (int i=1; i<=n; i++) {
            arr[i]=m+i;
            s.insert(arr[i]);
        }

        int top=m;

        for (int i=0; i<m; i++) {
            int x;
            cin>>x;

            cout<<s.order_of_key(arr[x]);
            if (i+1<m) cout<<" ";

            s.erase(arr[x]);
            arr[x]=top--;
            s.insert(arr[x]);
        }
        cout<<"\n";
    }
}