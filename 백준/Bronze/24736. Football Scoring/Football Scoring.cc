#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a1,b1,c1,d1,e1,a2,b2,c2,d2,e2;

    cin>>a1>>b1>>c1>>d1>>e1;
    cin>>a2>>b2>>c2>>d2>>e2;
    int ans1=a1*6+b1*3+c1*2+d1*1+e1*2,ans2=a2*6+b2*3+c2*2+d2*1+e2*2;
    cout<<ans1<<" "<<ans2;
}