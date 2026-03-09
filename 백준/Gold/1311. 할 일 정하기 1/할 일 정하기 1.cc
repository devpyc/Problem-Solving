#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

const int MAX=20;
const int INF=1e9;

int n;
int cost[MAX][MAX];
int dp[MAX][1<<MAX];

int solve(int person, int state){
    if(person==n) return 0;

    int& ret=dp[person][state];
    if(ret!=-1) return ret;

    ret = INF;
    for (int job = 0; job < n; job++) {
        if (state & (1 << job)) continue;
        ret = min(ret, cost[person][job] + solve(person + 1, state | (1 << job)));
    }

    return ret;
}

int main() {
    io;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));
    
    cout << solve(0, 0) << endl;

    return 0;
}