#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main()
{
    int n;
    int ans=0;
    while(1){
        cin>>n;
        if(n==-1){
            cout<<ans;
            return 0;
        }
        ans+=n;
    }
}