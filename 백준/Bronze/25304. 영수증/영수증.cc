#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    cin>>a>>b;
    long long ans=0;
    while(b--) {
        long long c,d;
        cin>>c>>d;
        ans+=(c*d);
    }
    (ans==a)?cout<<"Yes":cout<<"No";
}