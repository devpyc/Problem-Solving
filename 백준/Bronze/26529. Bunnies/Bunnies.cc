#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    long long dp[46];
    dp[0]=1,dp[1]=1;

    for (int i=2; i<46; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }

    while (t--) {
        int x;
        cin>>x;
        cout<<dp[x]<<"\n";
    }
}