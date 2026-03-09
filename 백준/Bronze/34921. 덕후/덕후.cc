#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b;
    cin>>a>>b;
    int ans=10+2*(25-a+b);
    cout<<(ans<0?0:ans);
}