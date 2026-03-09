#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    int ans1,ans2;
    if(n%a==0) {
        ans1=n/a*b;
    }else if(n%a!=0){
        ans1=(n/a+1)*b;
    }

    if(n%c==0) {
        ans2=n/c*d;
    }else if(n%c!=0) {
        ans2=(n/c+1)*d;
    }
    cout<<min(ans1,ans2);
}