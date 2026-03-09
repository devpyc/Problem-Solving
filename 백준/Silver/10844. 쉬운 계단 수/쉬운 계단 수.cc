#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1'000'000'000;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    vector<vector<ll>> dp(N+1, vector<ll>(10, 0));

    for(int j=1; j<=9; j++){
        dp[1][j] = 1;
    }

    for(int i=2; i<=N; i++){
        for(int j=0; j<=9; j++){
            if(j > 0){
                dp[i][j] += dp[i-1][j-1];
                dp[i][j] %= MOD;
            }
            if(j < 9){
                dp[i][j] += dp[i-1][j+1];
                dp[i][j] %= MOD;
            }
        }
    }

    ll result = 0;
    for(int j=0; j<=9; j++){
        result += dp[N][j];
        result %= MOD;
    }

    cout << result;
}