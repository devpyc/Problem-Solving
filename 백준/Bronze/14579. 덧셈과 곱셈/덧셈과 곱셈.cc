#include <bits/stdc++.h>
#define MOD 14579
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

   int a,b;
    cin>>a>>b;

    long long ans=1;
    for(int i=a; i<=b; i++) {
        long long res=(long long)i*(i+1)/2;
        ans=ans*(res%MOD)%MOD;
    }
    cout<<ans;
}