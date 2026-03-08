#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    for (int i=1; i<=t; i++) {
        string s;
        cin>>s;
        string ans="";
        for (char c:s) {
            if (c=='Z') ans+='A';
            else ans+=c+1;
        }
        cout<<"String #"<<i<<"\n"<<ans<<"\n\n";
    }
}