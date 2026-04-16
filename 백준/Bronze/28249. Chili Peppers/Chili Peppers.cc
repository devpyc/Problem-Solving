#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    map<string,int>m{{"Poblano",1500},{"Mirasol",6000},{"Serrano",15500},{"Cayenne",40000},{"Thai",75000},{"Habanero",125000}};

    int t;
    cin>>t;
    int ans=0;
    while (t--) {
        string s;
        cin>>s;
        ans+=m[s];
    }
    cout<<ans;
}