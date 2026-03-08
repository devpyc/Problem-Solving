#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b,c;
    cin>>a>>b>>c;
    if (a+b+c>=100) {
        cout<<"OK";
    }else {
        if (min({a,b,c})==a) cout<<"Soongsil";
        else if (min({a,b,c})==b) cout<<"Korea";
        else cout<<"Hanyang";
    }
}