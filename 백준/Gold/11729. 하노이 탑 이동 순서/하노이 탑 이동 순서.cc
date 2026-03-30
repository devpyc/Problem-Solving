#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll first, ll to, ll last, vector<pair<ll,ll>>&arr) {
    if (n==1) {
        arr.push_back({first,to});
        return;
    }
    solve(n-1,first,last,to,arr);
    arr.push_back({first,to});
    solve(n-1,last,to,first,arr);
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin>>n;

    vector<pair<ll,ll>>arr;
    solve(n,1,3,2,arr);
    cout<<arr.size()<<"\n";
    for (auto &i:arr) {
        cout<<i.first<<" "<<i.second<<"\n";
    }
}