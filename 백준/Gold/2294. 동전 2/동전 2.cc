#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    vector<int>dp(k+1,10001);

    dp[0]=0;

    for (int i=0; i<n; i++) {
        for (int j=arr[i]; j<k+1; j++) {
            if (dp[j-arr[i]]!=10001) {
                dp[j]=min(dp[j],dp[j-arr[i]]+1);
            }
        }
    }
    cout<<(dp[k]==10001?-1:dp[k]);
}