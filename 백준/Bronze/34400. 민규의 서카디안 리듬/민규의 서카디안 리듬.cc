#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;
        x%=25;
        cout<<(x<17?"ONLINE\n":"OFFLINE\n");
    }
}