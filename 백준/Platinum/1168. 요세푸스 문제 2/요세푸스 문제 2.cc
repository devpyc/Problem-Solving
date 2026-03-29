#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;

    ordered_set<int>s;
    for (int i=1; i<=n; i++) {
        s.insert(i);
    }

    int i=0;
    vector<int>ans;
    while (!s.empty()) {
        i=(i+k-1)%s.size();
        auto it=s.find_by_order(i);
        ans.push_back(*it);
        s.erase(it);
    }

    cout<<"<";
    for (int i=0; i<ans.size(); i++) {
        cout<<ans[i];
        if (ans.size()>i+1) {
            cout<<", ";
        }
    }
    cout<<">";
}