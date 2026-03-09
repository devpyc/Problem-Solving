#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    ll k;
    cin>>n>>k;

    ll ans=0;

    for(int i=1; i<=n; i++){
        int di=log10(i)+1;
        ans=(ans*(ll)pow(10,di)%k+i)%k;
    }
    cout<<ans<<endl;
}