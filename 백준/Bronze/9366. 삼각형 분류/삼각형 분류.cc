#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    for (int i=1; i<=t; i++) {
        int a,b,c;
        cin>>a>>b>>c;

        int m=max({a,b,c}),sum=a+b+c-m;
        cout<<"Case #"<<i<<": ";
        cout<<(sum<=m?"invalid!\n":(a==b&&b==c?"equilateral\n":(a==b||b==c||a==c?"isosceles\n":"scalene\n")));
    }
}