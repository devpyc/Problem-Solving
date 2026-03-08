#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int q;
    cin>>q;
    while (q--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool check=false;
        if ((a==1||a==2)&&d>=50) {
            int t=(a==1?100:90);
            bool A=(t>3*b)&&(t>3*c),B=(b<=21)||(c<=21);
            check=A||B;
        }
        cout<<(check?"YES":"NO")<<"\n";
    }
}