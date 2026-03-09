#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s,ans;
        getline(cin,s);
        if(!s.empty()) ans+=s[0];
        for(int i=1; i<s.size(); i++){
            if(s[i]!=s[i-1]) ans+=s[i];
        }
        cout<<ans<<"\n";
    }
}