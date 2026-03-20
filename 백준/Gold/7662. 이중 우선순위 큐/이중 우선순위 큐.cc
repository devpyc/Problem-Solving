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
        int n;
        cin>>n;
        ordered_set<pair<int,int>>s;
        int i=0;
        while (n--) {
            char c;
            cin>>c;
            if (c=='I') {
                int x;
                cin>>x;
                s.insert({x,i++});
            }else {
                int x;
                cin>>x;
                if (!s.empty()) {
                    if (x==-1) {
                        s.erase(s.find_by_order(0));
                    }else {
                        s.erase(s.find_by_order(s.size()-1));
                    }
                }
            }
        }
        if (!s.empty()) {
            cout<<s.find_by_order(s.size()-1)->first<<" "<<s.find_by_order(0)->first<<"\n";
        }else {
            cout<<"EMPTY\n";
        }
    }
}