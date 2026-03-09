#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=5; i<=n; i*=5){
        cnt+=n/i;
    }
    cout<<cnt<<endl;
}