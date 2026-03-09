#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string a="CAMBRIDGE";
    string s;
    cin>>s;

    string ans="";
    for (int i=0; i<s.size(); i++) {
        if(a.find(s[i])==string::npos) {
            ans+=s[i];
        }
    }
    cout<<ans;
}