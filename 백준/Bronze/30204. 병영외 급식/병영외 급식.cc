#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b;
    cin>>a>>b;
    int ans=0;
    while (a--) {
        int x;
        cin>>x;
        ans+=x;
    }
    cout<<(ans%b==0);
}