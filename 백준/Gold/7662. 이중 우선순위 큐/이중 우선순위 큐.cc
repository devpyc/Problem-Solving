#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--){
        int q;
        cin>>q;
        ordered_set<pair<int,int>>os;
        int i=0;
        while (q--) {
            char c;
            cin>>c;
            if (c=='I') {
                int x;
                cin>>x;
                os.insert({x,i++});
            }else {
                int x;
                cin>>x;
                if (x==1) {
                    os.erase(os.find_by_order(os.size()-1));
                }else {
                    os.erase(os.find_by_order(0));
                }
            }
        }
        if (!os.empty()) {
            cout<<os.find_by_order(os.size()-1)->first<<" "<<os.find_by_order(0)->first<<"\n";
        }else {
            cout<<"EMPTY\n";
        }

    }
}