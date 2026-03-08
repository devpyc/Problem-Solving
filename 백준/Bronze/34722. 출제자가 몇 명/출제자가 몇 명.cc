#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int cnt=0;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a>=1000||b>=1600||c>=1500||(d!=-1&&d<=30)) cnt++;
    }
    cout<<cnt;
}