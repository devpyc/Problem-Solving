#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size()-3; i++) {
        if(s[i]=='D'&&s[i+1]=='K'&&s[i+2]=='S'&&s[i+3]=='H') {
            ans++;
        }
    }
    cout<<ans;
}