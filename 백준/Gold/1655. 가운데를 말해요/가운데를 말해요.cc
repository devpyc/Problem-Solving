#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    ordered_set s;

    int i=0;
    while (t--) {
        int x;
        cin>>x;

        s.insert({x,i++});
        if (s.size()%2==0) {
            cout<<s.find_by_order(s.size()/2-1)->first<<"\n";
        }else {
            cout<<s.find_by_order(s.size()/2)->first<<"\n";
        }
    }
}