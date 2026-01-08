#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>dp(n+1);
    dp[2]=3;
    dp[4]=11;

    for (int i=6; i<=n; i+=2) {
        dp[i]=dp[i-2]*4-dp[i-4];
    }

    cout<<dp[n];
    // 1=0, 2=3, 3=0, 4=11, 5=0, 6=41, 7=0 ,8=153
}