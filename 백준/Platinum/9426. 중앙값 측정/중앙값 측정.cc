#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

using ordered_set = tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);

    ordered_set s;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long ans=0;
    for(int i=0; i<n; i++){
        s.insert({arr[i],i});
        if(i>=k) s.erase({arr[i-k],i-k});
        if(i>=k-1){
            int idx;
            if(k%2==0) idx=k/2-1;
            else idx=k/2;

            ans+=s.find_by_order(idx)->first;
        }
    }
    cout<<ans;
}