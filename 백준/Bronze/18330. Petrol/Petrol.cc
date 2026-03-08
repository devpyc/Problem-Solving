#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;

    k+=60;
    int ans;
    if(n<=k) ans=n*1500;
    else ans=k*1500+(n-k)*3000;
    cout<<ans;
}