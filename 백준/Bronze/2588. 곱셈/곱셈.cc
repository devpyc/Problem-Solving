#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int ans=a*b;
    while(b!=0) {
        cout<<a*(b%10)<<"\n";
        b/=10;
    }
    cout<<ans;
}