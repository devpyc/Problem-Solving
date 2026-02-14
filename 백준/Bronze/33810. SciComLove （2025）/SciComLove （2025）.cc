#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string a="SciComLove";
    string s;
    cin>>s;
    int ans=0;
    for (int i=0; i<s.size(); i++) {
        ans+=(a[i]!=s[i]);
    }
    cout<<ans;
}