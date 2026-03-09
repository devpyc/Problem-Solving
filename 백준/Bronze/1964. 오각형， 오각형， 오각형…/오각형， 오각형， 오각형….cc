#include <bits/stdc++.h>
#define int long long
#define mod 45678
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int ans=5;
    for(int i=2; i<=n; i++){
        ans=ans+(i*3+1);
    }
    cout<<ans%mod;
}