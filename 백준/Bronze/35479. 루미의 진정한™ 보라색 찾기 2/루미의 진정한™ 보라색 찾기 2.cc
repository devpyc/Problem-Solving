#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b,c;
    cin>>a>>b>>c;

    double R=a/255.0,G=b/255.0,B=c/255.0;
    double k=1-max({R,G,B});
    double C=0,M=0,Y=0;
    if (k<1) {
        C=(1-R-k)/(1-k);
        M=(1-G-k)/(1-k);
        Y=(1-B-k)/(1-k);
    }
    cout.precision(5);
    cout<<fixed;
    cout<<C<<" "<<M<<" "<<Y<<" "<<k;
}