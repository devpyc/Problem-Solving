#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (1) {
        int x;
        cin>>x;
        if (x==0) return 0;
        int ans=0;
        for (int i=1; i<=x; i++) {
            ans+=i;
        }
        cout<<ans<<"\n";
    }
}