#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    int dp[41];
    dp[1]=1,dp[2]=1;

    for (int i=3; i<=n; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<" "<<n-2;
}