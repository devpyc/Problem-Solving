#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++) {
        if(i%2==1) ans+=3;
        else ans-=2;
    }
    cout<<ans;
}