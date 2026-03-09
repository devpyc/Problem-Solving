#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main(){
    io;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=min(a+d,b+c);
    cout<<ans<<endl;
}