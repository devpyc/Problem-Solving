#include<bits/stdc++.h>
using namespace std;

string add(string a,string b){
    string ans;
    int c=0;
    int i=a.size()-1;
    int j=b.size()-1;

    while(i>=0||j>=0||c>0){
        int sum=c;
        if(i>=0) sum+=a[i--]-'0';
        if(j>=0) sum+=b[j--]-'0';
        c=sum/10;
        sum=sum%10;
        ans+=to_string(sum);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

string dp[251];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    dp[0]="1";
    dp[1]="1";
    dp[2]="3";

    for (int i=3; i<251; i++) {
        dp[i]=add(add(dp[i-1],dp[i-2]),dp[i-2]);
    }

    int n;
    while (cin>>n) {
        cout<<dp[n]<<"\n";
    }
}