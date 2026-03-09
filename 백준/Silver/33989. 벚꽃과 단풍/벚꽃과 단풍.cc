#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    string s;
    cin>>n>>s;

    int ans=n,cnt=0,b=0;
    for(char c:s) {
        if(c=='B') b++;
    }
    for(int i=0; i<=n; i++) {
        ans=min(ans,cnt+b);
        if(i<n) {
            if(s[i]=='D') cnt++;
            else b--;
        }
    }
    cout<<ans;
}